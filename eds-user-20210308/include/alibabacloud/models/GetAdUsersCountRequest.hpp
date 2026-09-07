// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADUSERSCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETADUSERSCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class GetAdUsersCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAdUsersCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(SolutionId, solutionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAdUsersCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_FROM_JSON(SolutionId, solutionId_);
    };
    GetAdUsersCountRequest() = default ;
    GetAdUsersCountRequest(const GetAdUsersCountRequest &) = default ;
    GetAdUsersCountRequest(GetAdUsersCountRequest &&) = default ;
    GetAdUsersCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAdUsersCountRequest() = default ;
    GetAdUsersCountRequest& operator=(const GetAdUsersCountRequest &) = default ;
    GetAdUsersCountRequest& operator=(GetAdUsersCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && this->businessChannel_ == nullptr && this->solutionId_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline GetAdUsersCountRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline GetAdUsersCountRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline string getSolutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
    inline GetAdUsersCountRequest& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


  protected:
    shared_ptr<string> bizType_ {};
    shared_ptr<string> businessChannel_ {};
    shared_ptr<string> solutionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
