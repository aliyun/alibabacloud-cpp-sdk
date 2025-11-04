// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADINSERTIONSRESPONSEBODYCONFIGSCDNCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTADINSERTIONSRESPONSEBODYCONFIGSCDNCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAdInsertionsResponseBodyConfigsCdnConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAdInsertionsResponseBodyConfigsCdnConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AdSegmentUrlPrefix, adSegmentUrlPrefix_);
      DARABONBA_PTR_TO_JSON(ContentSegmentUrlPrefix, contentSegmentUrlPrefix_);
    };
    friend void from_json(const Darabonba::Json& j, ListAdInsertionsResponseBodyConfigsCdnConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AdSegmentUrlPrefix, adSegmentUrlPrefix_);
      DARABONBA_PTR_FROM_JSON(ContentSegmentUrlPrefix, contentSegmentUrlPrefix_);
    };
    ListAdInsertionsResponseBodyConfigsCdnConfig() = default ;
    ListAdInsertionsResponseBodyConfigsCdnConfig(const ListAdInsertionsResponseBodyConfigsCdnConfig &) = default ;
    ListAdInsertionsResponseBodyConfigsCdnConfig(ListAdInsertionsResponseBodyConfigsCdnConfig &&) = default ;
    ListAdInsertionsResponseBodyConfigsCdnConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAdInsertionsResponseBodyConfigsCdnConfig() = default ;
    ListAdInsertionsResponseBodyConfigsCdnConfig& operator=(const ListAdInsertionsResponseBodyConfigsCdnConfig &) = default ;
    ListAdInsertionsResponseBodyConfigsCdnConfig& operator=(ListAdInsertionsResponseBodyConfigsCdnConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adSegmentUrlPrefix_ == nullptr
        && return this->contentSegmentUrlPrefix_ == nullptr; };
    // adSegmentUrlPrefix Field Functions 
    bool hasAdSegmentUrlPrefix() const { return this->adSegmentUrlPrefix_ != nullptr;};
    void deleteAdSegmentUrlPrefix() { this->adSegmentUrlPrefix_ = nullptr;};
    inline string adSegmentUrlPrefix() const { DARABONBA_PTR_GET_DEFAULT(adSegmentUrlPrefix_, "") };
    inline ListAdInsertionsResponseBodyConfigsCdnConfig& setAdSegmentUrlPrefix(string adSegmentUrlPrefix) { DARABONBA_PTR_SET_VALUE(adSegmentUrlPrefix_, adSegmentUrlPrefix) };


    // contentSegmentUrlPrefix Field Functions 
    bool hasContentSegmentUrlPrefix() const { return this->contentSegmentUrlPrefix_ != nullptr;};
    void deleteContentSegmentUrlPrefix() { this->contentSegmentUrlPrefix_ = nullptr;};
    inline string contentSegmentUrlPrefix() const { DARABONBA_PTR_GET_DEFAULT(contentSegmentUrlPrefix_, "") };
    inline ListAdInsertionsResponseBodyConfigsCdnConfig& setContentSegmentUrlPrefix(string contentSegmentUrlPrefix) { DARABONBA_PTR_SET_VALUE(contentSegmentUrlPrefix_, contentSegmentUrlPrefix) };


  protected:
    // The CDN prefix for ad segments.
    std::shared_ptr<string> adSegmentUrlPrefix_ = nullptr;
    // The CDN prefix for content segments.
    std::shared_ptr<string> contentSegmentUrlPrefix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
