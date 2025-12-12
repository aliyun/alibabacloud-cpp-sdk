// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWARNINGCONFIGRESPONSEBODYDATAWARNINGCONFIGINFOCHANNELSCHANNEL_HPP_
#define ALIBABACLOUD_MODELS_LISTWARNINGCONFIGRESPONSEBODYDATAWARNINGCONFIGINFOCHANNELSCHANNEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel() = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel(const ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel &) = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel(ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel &&) = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel() = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel& operator=(const ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel &) = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel& operator=(ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && return this->url_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
