// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTITLEINTELLIGENCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTITLEINTELLIGENCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class GetTitleIntelligenceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTitleIntelligenceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatLevelThreeId, catLevelThreeId_);
      DARABONBA_PTR_TO_JSON(CatLevelTwoId, catLevelTwoId_);
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
    };
    friend void from_json(const Darabonba::Json& j, GetTitleIntelligenceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatLevelThreeId, catLevelThreeId_);
      DARABONBA_PTR_FROM_JSON(CatLevelTwoId, catLevelTwoId_);
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
    };
    GetTitleIntelligenceRequest() = default ;
    GetTitleIntelligenceRequest(const GetTitleIntelligenceRequest &) = default ;
    GetTitleIntelligenceRequest(GetTitleIntelligenceRequest &&) = default ;
    GetTitleIntelligenceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTitleIntelligenceRequest() = default ;
    GetTitleIntelligenceRequest& operator=(const GetTitleIntelligenceRequest &) = default ;
    GetTitleIntelligenceRequest& operator=(GetTitleIntelligenceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catLevelThreeId_ == nullptr
        && return this->catLevelTwoId_ == nullptr && return this->extra_ == nullptr && return this->keywords_ == nullptr && return this->platform_ == nullptr; };
    // catLevelThreeId Field Functions 
    bool hasCatLevelThreeId() const { return this->catLevelThreeId_ != nullptr;};
    void deleteCatLevelThreeId() { this->catLevelThreeId_ = nullptr;};
    inline int64_t catLevelThreeId() const { DARABONBA_PTR_GET_DEFAULT(catLevelThreeId_, 0L) };
    inline GetTitleIntelligenceRequest& setCatLevelThreeId(int64_t catLevelThreeId) { DARABONBA_PTR_SET_VALUE(catLevelThreeId_, catLevelThreeId) };


    // catLevelTwoId Field Functions 
    bool hasCatLevelTwoId() const { return this->catLevelTwoId_ != nullptr;};
    void deleteCatLevelTwoId() { this->catLevelTwoId_ = nullptr;};
    inline int64_t catLevelTwoId() const { DARABONBA_PTR_GET_DEFAULT(catLevelTwoId_, 0L) };
    inline GetTitleIntelligenceRequest& setCatLevelTwoId(int64_t catLevelTwoId) { DARABONBA_PTR_SET_VALUE(catLevelTwoId_, catLevelTwoId) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline GetTitleIntelligenceRequest& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline string keywords() const { DARABONBA_PTR_GET_DEFAULT(keywords_, "") };
    inline GetTitleIntelligenceRequest& setKeywords(string keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline GetTitleIntelligenceRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> catLevelThreeId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> catLevelTwoId_ = nullptr;
    std::shared_ptr<string> extra_ = nullptr;
    std::shared_ptr<string> keywords_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> platform_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
