// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REJECTUSERSOLUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REJECTUSERSOLUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class RejectUserSolutionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RejectUserSolutionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(SolutionBizId, solutionBizId_);
    };
    friend void from_json(const Darabonba::Json& j, RejectUserSolutionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(SolutionBizId, solutionBizId_);
    };
    RejectUserSolutionRequest() = default ;
    RejectUserSolutionRequest(const RejectUserSolutionRequest &) = default ;
    RejectUserSolutionRequest(RejectUserSolutionRequest &&) = default ;
    RejectUserSolutionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RejectUserSolutionRequest() = default ;
    RejectUserSolutionRequest& operator=(const RejectUserSolutionRequest &) = default ;
    RejectUserSolutionRequest& operator=(RejectUserSolutionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizType_ != nullptr
        && this->note_ != nullptr && this->solutionBizId_ != nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline RejectUserSolutionRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline RejectUserSolutionRequest& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // solutionBizId Field Functions 
    bool hasSolutionBizId() const { return this->solutionBizId_ != nullptr;};
    void deleteSolutionBizId() { this->solutionBizId_ = nullptr;};
    inline string solutionBizId() const { DARABONBA_PTR_GET_DEFAULT(solutionBizId_, "") };
    inline RejectUserSolutionRequest& setSolutionBizId(string solutionBizId) { DARABONBA_PTR_SET_VALUE(solutionBizId_, solutionBizId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bizType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> note_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> solutionBizId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
