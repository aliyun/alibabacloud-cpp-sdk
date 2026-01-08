// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVESWITCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVESWITCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSensitiveSwitchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveSwitchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OpenCount, openCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UserSensitiveDataSwitchList, userSensitiveDataSwitchList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveSwitchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenCount, openCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UserSensitiveDataSwitchList, userSensitiveDataSwitchList_);
    };
    DescribeSensitiveSwitchResponseBody() = default ;
    DescribeSensitiveSwitchResponseBody(const DescribeSensitiveSwitchResponseBody &) = default ;
    DescribeSensitiveSwitchResponseBody(DescribeSensitiveSwitchResponseBody &&) = default ;
    DescribeSensitiveSwitchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveSwitchResponseBody() = default ;
    DescribeSensitiveSwitchResponseBody& operator=(const DescribeSensitiveSwitchResponseBody &) = default ;
    DescribeSensitiveSwitchResponseBody& operator=(DescribeSensitiveSwitchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserSensitiveDataSwitchList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserSensitiveDataSwitchList& obj) { 
        DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(SensitiveCategory, sensitiveCategory_);
        DARABONBA_PTR_TO_JSON(SensitiveLevel, sensitiveLevel_);
        DARABONBA_PTR_TO_JSON(SwitchStatus, switchStatus_);
      };
      friend void from_json(const Darabonba::Json& j, UserSensitiveDataSwitchList& obj) { 
        DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(SensitiveCategory, sensitiveCategory_);
        DARABONBA_PTR_FROM_JSON(SensitiveLevel, sensitiveLevel_);
        DARABONBA_PTR_FROM_JSON(SwitchStatus, switchStatus_);
      };
      UserSensitiveDataSwitchList() = default ;
      UserSensitiveDataSwitchList(const UserSensitiveDataSwitchList &) = default ;
      UserSensitiveDataSwitchList(UserSensitiveDataSwitchList &&) = default ;
      UserSensitiveDataSwitchList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserSensitiveDataSwitchList() = default ;
      UserSensitiveDataSwitchList& operator=(const UserSensitiveDataSwitchList &) = default ;
      UserSensitiveDataSwitchList& operator=(UserSensitiveDataSwitchList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->categoryName_ == nullptr
        && this->description_ == nullptr && this->sensitiveCategory_ == nullptr && this->sensitiveLevel_ == nullptr && this->switchStatus_ == nullptr; };
      // categoryName Field Functions 
      bool hasCategoryName() const { return this->categoryName_ != nullptr;};
      void deleteCategoryName() { this->categoryName_ = nullptr;};
      inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
      inline UserSensitiveDataSwitchList& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline UserSensitiveDataSwitchList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // sensitiveCategory Field Functions 
      bool hasSensitiveCategory() const { return this->sensitiveCategory_ != nullptr;};
      void deleteSensitiveCategory() { this->sensitiveCategory_ = nullptr;};
      inline string getSensitiveCategory() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCategory_, "") };
      inline UserSensitiveDataSwitchList& setSensitiveCategory(string sensitiveCategory) { DARABONBA_PTR_SET_VALUE(sensitiveCategory_, sensitiveCategory) };


      // sensitiveLevel Field Functions 
      bool hasSensitiveLevel() const { return this->sensitiveLevel_ != nullptr;};
      void deleteSensitiveLevel() { this->sensitiveLevel_ = nullptr;};
      inline string getSensitiveLevel() const { DARABONBA_PTR_GET_DEFAULT(sensitiveLevel_, "") };
      inline UserSensitiveDataSwitchList& setSensitiveLevel(string sensitiveLevel) { DARABONBA_PTR_SET_VALUE(sensitiveLevel_, sensitiveLevel) };


      // switchStatus Field Functions 
      bool hasSwitchStatus() const { return this->switchStatus_ != nullptr;};
      void deleteSwitchStatus() { this->switchStatus_ = nullptr;};
      inline int32_t getSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(switchStatus_, 0) };
      inline UserSensitiveDataSwitchList& setSwitchStatus(int32_t switchStatus) { DARABONBA_PTR_SET_VALUE(switchStatus_, switchStatus) };


    protected:
      shared_ptr<string> categoryName_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> sensitiveCategory_ {};
      shared_ptr<string> sensitiveLevel_ {};
      shared_ptr<int32_t> switchStatus_ {};
    };

    virtual bool empty() const override { return this->openCount_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->userSensitiveDataSwitchList_ == nullptr; };
    // openCount Field Functions 
    bool hasOpenCount() const { return this->openCount_ != nullptr;};
    void deleteOpenCount() { this->openCount_ = nullptr;};
    inline int64_t getOpenCount() const { DARABONBA_PTR_GET_DEFAULT(openCount_, 0L) };
    inline DescribeSensitiveSwitchResponseBody& setOpenCount(int64_t openCount) { DARABONBA_PTR_SET_VALUE(openCount_, openCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSensitiveSwitchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeSensitiveSwitchResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userSensitiveDataSwitchList Field Functions 
    bool hasUserSensitiveDataSwitchList() const { return this->userSensitiveDataSwitchList_ != nullptr;};
    void deleteUserSensitiveDataSwitchList() { this->userSensitiveDataSwitchList_ = nullptr;};
    inline const vector<DescribeSensitiveSwitchResponseBody::UserSensitiveDataSwitchList> & getUserSensitiveDataSwitchList() const { DARABONBA_PTR_GET_CONST(userSensitiveDataSwitchList_, vector<DescribeSensitiveSwitchResponseBody::UserSensitiveDataSwitchList>) };
    inline vector<DescribeSensitiveSwitchResponseBody::UserSensitiveDataSwitchList> getUserSensitiveDataSwitchList() { DARABONBA_PTR_GET(userSensitiveDataSwitchList_, vector<DescribeSensitiveSwitchResponseBody::UserSensitiveDataSwitchList>) };
    inline DescribeSensitiveSwitchResponseBody& setUserSensitiveDataSwitchList(const vector<DescribeSensitiveSwitchResponseBody::UserSensitiveDataSwitchList> & userSensitiveDataSwitchList) { DARABONBA_PTR_SET_VALUE(userSensitiveDataSwitchList_, userSensitiveDataSwitchList) };
    inline DescribeSensitiveSwitchResponseBody& setUserSensitiveDataSwitchList(vector<DescribeSensitiveSwitchResponseBody::UserSensitiveDataSwitchList> && userSensitiveDataSwitchList) { DARABONBA_PTR_SET_RVALUE(userSensitiveDataSwitchList_, userSensitiveDataSwitchList) };


  protected:
    shared_ptr<int64_t> openCount_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
    shared_ptr<vector<DescribeSensitiveSwitchResponseBody::UserSensitiveDataSwitchList>> userSensitiveDataSwitchList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
