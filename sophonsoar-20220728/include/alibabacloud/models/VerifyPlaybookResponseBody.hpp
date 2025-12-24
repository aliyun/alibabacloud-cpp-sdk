// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYPLAYBOOKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYPLAYBOOKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/VerifyPlaybookResponseBodyCheckTaskInfos.hpp>
#include <alibabacloud/models/VerifyPlaybookResponseBodyPrerequisites.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class VerifyPlaybookResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyPlaybookResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckTaskInfos, checkTaskInfos_);
      DARABONBA_PTR_TO_JSON(Prerequisites, prerequisites_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyPlaybookResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckTaskInfos, checkTaskInfos_);
      DARABONBA_PTR_FROM_JSON(Prerequisites, prerequisites_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    VerifyPlaybookResponseBody() = default ;
    VerifyPlaybookResponseBody(const VerifyPlaybookResponseBody &) = default ;
    VerifyPlaybookResponseBody(VerifyPlaybookResponseBody &&) = default ;
    VerifyPlaybookResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyPlaybookResponseBody() = default ;
    VerifyPlaybookResponseBody& operator=(const VerifyPlaybookResponseBody &) = default ;
    VerifyPlaybookResponseBody& operator=(VerifyPlaybookResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkTaskInfos_ == nullptr
        && return this->prerequisites_ == nullptr && return this->requestId_ == nullptr; };
    // checkTaskInfos Field Functions 
    bool hasCheckTaskInfos() const { return this->checkTaskInfos_ != nullptr;};
    void deleteCheckTaskInfos() { this->checkTaskInfos_ = nullptr;};
    inline const vector<VerifyPlaybookResponseBodyCheckTaskInfos> & checkTaskInfos() const { DARABONBA_PTR_GET_CONST(checkTaskInfos_, vector<VerifyPlaybookResponseBodyCheckTaskInfos>) };
    inline vector<VerifyPlaybookResponseBodyCheckTaskInfos> checkTaskInfos() { DARABONBA_PTR_GET(checkTaskInfos_, vector<VerifyPlaybookResponseBodyCheckTaskInfos>) };
    inline VerifyPlaybookResponseBody& setCheckTaskInfos(const vector<VerifyPlaybookResponseBodyCheckTaskInfos> & checkTaskInfos) { DARABONBA_PTR_SET_VALUE(checkTaskInfos_, checkTaskInfos) };
    inline VerifyPlaybookResponseBody& setCheckTaskInfos(vector<VerifyPlaybookResponseBodyCheckTaskInfos> && checkTaskInfos) { DARABONBA_PTR_SET_RVALUE(checkTaskInfos_, checkTaskInfos) };


    // prerequisites Field Functions 
    bool hasPrerequisites() const { return this->prerequisites_ != nullptr;};
    void deletePrerequisites() { this->prerequisites_ = nullptr;};
    inline const vector<VerifyPlaybookResponseBodyPrerequisites> & prerequisites() const { DARABONBA_PTR_GET_CONST(prerequisites_, vector<VerifyPlaybookResponseBodyPrerequisites>) };
    inline vector<VerifyPlaybookResponseBodyPrerequisites> prerequisites() { DARABONBA_PTR_GET(prerequisites_, vector<VerifyPlaybookResponseBodyPrerequisites>) };
    inline VerifyPlaybookResponseBody& setPrerequisites(const vector<VerifyPlaybookResponseBodyPrerequisites> & prerequisites) { DARABONBA_PTR_SET_VALUE(prerequisites_, prerequisites) };
    inline VerifyPlaybookResponseBody& setPrerequisites(vector<VerifyPlaybookResponseBodyPrerequisites> && prerequisites) { DARABONBA_PTR_SET_RVALUE(prerequisites_, prerequisites) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyPlaybookResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The result of the verification.
    std::shared_ptr<vector<VerifyPlaybookResponseBodyCheckTaskInfos>> checkTaskInfos_ = nullptr;
    std::shared_ptr<vector<VerifyPlaybookResponseBodyPrerequisites>> prerequisites_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
