// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVESWITCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVESWITCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList.hpp>
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
    virtual bool empty() const override { return this->openCount_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->userSensitiveDataSwitchList_ == nullptr; };
    // openCount Field Functions 
    bool hasOpenCount() const { return this->openCount_ != nullptr;};
    void deleteOpenCount() { this->openCount_ = nullptr;};
    inline int64_t openCount() const { DARABONBA_PTR_GET_DEFAULT(openCount_, 0L) };
    inline DescribeSensitiveSwitchResponseBody& setOpenCount(int64_t openCount) { DARABONBA_PTR_SET_VALUE(openCount_, openCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSensitiveSwitchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeSensitiveSwitchResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userSensitiveDataSwitchList Field Functions 
    bool hasUserSensitiveDataSwitchList() const { return this->userSensitiveDataSwitchList_ != nullptr;};
    void deleteUserSensitiveDataSwitchList() { this->userSensitiveDataSwitchList_ = nullptr;};
    inline const vector<DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList> & userSensitiveDataSwitchList() const { DARABONBA_PTR_GET_CONST(userSensitiveDataSwitchList_, vector<DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList>) };
    inline vector<DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList> userSensitiveDataSwitchList() { DARABONBA_PTR_GET(userSensitiveDataSwitchList_, vector<DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList>) };
    inline DescribeSensitiveSwitchResponseBody& setUserSensitiveDataSwitchList(const vector<DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList> & userSensitiveDataSwitchList) { DARABONBA_PTR_SET_VALUE(userSensitiveDataSwitchList_, userSensitiveDataSwitchList) };
    inline DescribeSensitiveSwitchResponseBody& setUserSensitiveDataSwitchList(vector<DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList> && userSensitiveDataSwitchList) { DARABONBA_PTR_SET_RVALUE(userSensitiveDataSwitchList_, userSensitiveDataSwitchList) };


  protected:
    std::shared_ptr<int64_t> openCount_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<vector<DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList>> userSensitiveDataSwitchList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
