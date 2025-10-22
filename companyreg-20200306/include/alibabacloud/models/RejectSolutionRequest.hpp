// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REJECTSOLUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REJECTSOLUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class RejectSolutionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RejectSolutionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(SolutionBizId, solutionBizId_);
    };
    friend void from_json(const Darabonba::Json& j, RejectSolutionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(SolutionBizId, solutionBizId_);
    };
    RejectSolutionRequest() = default ;
    RejectSolutionRequest(const RejectSolutionRequest &) = default ;
    RejectSolutionRequest(RejectSolutionRequest &&) = default ;
    RejectSolutionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RejectSolutionRequest() = default ;
    RejectSolutionRequest& operator=(const RejectSolutionRequest &) = default ;
    RejectSolutionRequest& operator=(RejectSolutionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && return this->note_ == nullptr && return this->solutionBizId_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline RejectSolutionRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline RejectSolutionRequest& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // solutionBizId Field Functions 
    bool hasSolutionBizId() const { return this->solutionBizId_ != nullptr;};
    void deleteSolutionBizId() { this->solutionBizId_ = nullptr;};
    inline string solutionBizId() const { DARABONBA_PTR_GET_DEFAULT(solutionBizId_, "") };
    inline RejectSolutionRequest& setSolutionBizId(string solutionBizId) { DARABONBA_PTR_SET_VALUE(solutionBizId_, solutionBizId) };


  protected:
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
