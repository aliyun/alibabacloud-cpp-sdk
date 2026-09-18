// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALLRULESSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETALLRULESSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetAllRulesSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAllRulesSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(target, target_);
    };
    friend void from_json(const Darabonba::Json& j, GetAllRulesSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(target, target_);
    };
    GetAllRulesSummaryRequest() = default ;
    GetAllRulesSummaryRequest(const GetAllRulesSummaryRequest &) = default ;
    GetAllRulesSummaryRequest(GetAllRulesSummaryRequest &&) = default ;
    GetAllRulesSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAllRulesSummaryRequest() = default ;
    GetAllRulesSummaryRequest& operator=(const GetAllRulesSummaryRequest &) = default ;
    GetAllRulesSummaryRequest& operator=(GetAllRulesSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->source_ == nullptr
        && this->target_ == nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetAllRulesSummaryRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline GetAllRulesSummaryRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    // The source dialect.
    shared_ptr<string> source_ {};
    // The target dialect.
    shared_ptr<string> target_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
