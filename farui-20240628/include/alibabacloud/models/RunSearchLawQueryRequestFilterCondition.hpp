// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHLAWQUERYREQUESTFILTERCONDITION_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHLAWQUERYREQUESTFILTERCONDITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunSearchLawQueryRequestFilterCondition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchLawQueryRequestFilterCondition& obj) { 
      DARABONBA_PTR_TO_JSON(lawName, lawName_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchLawQueryRequestFilterCondition& obj) { 
      DARABONBA_PTR_FROM_JSON(lawName, lawName_);
    };
    RunSearchLawQueryRequestFilterCondition() = default ;
    RunSearchLawQueryRequestFilterCondition(const RunSearchLawQueryRequestFilterCondition &) = default ;
    RunSearchLawQueryRequestFilterCondition(RunSearchLawQueryRequestFilterCondition &&) = default ;
    RunSearchLawQueryRequestFilterCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchLawQueryRequestFilterCondition() = default ;
    RunSearchLawQueryRequestFilterCondition& operator=(const RunSearchLawQueryRequestFilterCondition &) = default ;
    RunSearchLawQueryRequestFilterCondition& operator=(RunSearchLawQueryRequestFilterCondition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lawName_ == nullptr; };
    // lawName Field Functions 
    bool hasLawName() const { return this->lawName_ != nullptr;};
    void deleteLawName() { this->lawName_ = nullptr;};
    inline string lawName() const { DARABONBA_PTR_GET_DEFAULT(lawName_, "") };
    inline RunSearchLawQueryRequestFilterCondition& setLawName(string lawName) { DARABONBA_PTR_SET_VALUE(lawName_, lawName) };


  protected:
    std::shared_ptr<string> lawName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
