// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BASECITYINFOSEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BASECITYINFOSEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class BaseCityInfoSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BaseCityInfoSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(region, region_);
    };
    friend void from_json(const Darabonba::Json& j, BaseCityInfoSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(region, region_);
    };
    BaseCityInfoSearchRequest() = default ;
    BaseCityInfoSearchRequest(const BaseCityInfoSearchRequest &) = default ;
    BaseCityInfoSearchRequest(BaseCityInfoSearchRequest &&) = default ;
    BaseCityInfoSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BaseCityInfoSearchRequest() = default ;
    BaseCityInfoSearchRequest& operator=(const BaseCityInfoSearchRequest &) = default ;
    BaseCityInfoSearchRequest& operator=(BaseCityInfoSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyword_ != nullptr
        && this->region_ != nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline BaseCityInfoSearchRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline BaseCityInfoSearchRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> keyword_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
