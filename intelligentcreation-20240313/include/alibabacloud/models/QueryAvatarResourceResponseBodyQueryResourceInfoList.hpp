// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAVATARRESOURCERESPONSEBODYQUERYRESOURCEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAVATARRESOURCERESPONSEBODYQUERYRESOURCEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class QueryAvatarResourceResponseBodyQueryResourceInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAvatarResourceResponseBodyQueryResourceInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(validPeriodTime, validPeriodTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAvatarResourceResponseBodyQueryResourceInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(validPeriodTime, validPeriodTime_);
    };
    QueryAvatarResourceResponseBodyQueryResourceInfoList() = default ;
    QueryAvatarResourceResponseBodyQueryResourceInfoList(const QueryAvatarResourceResponseBodyQueryResourceInfoList &) = default ;
    QueryAvatarResourceResponseBodyQueryResourceInfoList(QueryAvatarResourceResponseBodyQueryResourceInfoList &&) = default ;
    QueryAvatarResourceResponseBodyQueryResourceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAvatarResourceResponseBodyQueryResourceInfoList() = default ;
    QueryAvatarResourceResponseBodyQueryResourceInfoList& operator=(const QueryAvatarResourceResponseBodyQueryResourceInfoList &) = default ;
    QueryAvatarResourceResponseBodyQueryResourceInfoList& operator=(QueryAvatarResourceResponseBodyQueryResourceInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceId_ == nullptr
        && return this->type_ == nullptr && return this->validPeriodTime_ == nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline QueryAvatarResourceResponseBodyQueryResourceInfoList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryAvatarResourceResponseBodyQueryResourceInfoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // validPeriodTime Field Functions 
    bool hasValidPeriodTime() const { return this->validPeriodTime_ != nullptr;};
    void deleteValidPeriodTime() { this->validPeriodTime_ = nullptr;};
    inline string validPeriodTime() const { DARABONBA_PTR_GET_DEFAULT(validPeriodTime_, "") };
    inline QueryAvatarResourceResponseBodyQueryResourceInfoList& setValidPeriodTime(string validPeriodTime) { DARABONBA_PTR_SET_VALUE(validPeriodTime_, validPeriodTime) };


  protected:
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> validPeriodTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
