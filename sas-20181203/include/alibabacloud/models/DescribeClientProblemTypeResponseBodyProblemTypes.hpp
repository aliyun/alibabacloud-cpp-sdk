// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTPROBLEMTYPERESPONSEBODYPROBLEMTYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTPROBLEMTYPERESPONSEBODYPROBLEMTYPES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClientProblemTypeResponseBodyProblemTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientProblemTypeResponseBodyProblemTypes& obj) { 
      DARABONBA_PTR_TO_JSON(problemDetail, problemDetail_);
      DARABONBA_PTR_TO_JSON(problemId, problemId_);
      DARABONBA_PTR_TO_JSON(problemType, problemType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientProblemTypeResponseBodyProblemTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(problemDetail, problemDetail_);
      DARABONBA_PTR_FROM_JSON(problemId, problemId_);
      DARABONBA_PTR_FROM_JSON(problemType, problemType_);
    };
    DescribeClientProblemTypeResponseBodyProblemTypes() = default ;
    DescribeClientProblemTypeResponseBodyProblemTypes(const DescribeClientProblemTypeResponseBodyProblemTypes &) = default ;
    DescribeClientProblemTypeResponseBodyProblemTypes(DescribeClientProblemTypeResponseBodyProblemTypes &&) = default ;
    DescribeClientProblemTypeResponseBodyProblemTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientProblemTypeResponseBodyProblemTypes() = default ;
    DescribeClientProblemTypeResponseBodyProblemTypes& operator=(const DescribeClientProblemTypeResponseBodyProblemTypes &) = default ;
    DescribeClientProblemTypeResponseBodyProblemTypes& operator=(DescribeClientProblemTypeResponseBodyProblemTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->problemDetail_ == nullptr
        && return this->problemId_ == nullptr && return this->problemType_ == nullptr; };
    // problemDetail Field Functions 
    bool hasProblemDetail() const { return this->problemDetail_ != nullptr;};
    void deleteProblemDetail() { this->problemDetail_ = nullptr;};
    inline string problemDetail() const { DARABONBA_PTR_GET_DEFAULT(problemDetail_, "") };
    inline DescribeClientProblemTypeResponseBodyProblemTypes& setProblemDetail(string problemDetail) { DARABONBA_PTR_SET_VALUE(problemDetail_, problemDetail) };


    // problemId Field Functions 
    bool hasProblemId() const { return this->problemId_ != nullptr;};
    void deleteProblemId() { this->problemId_ = nullptr;};
    inline string problemId() const { DARABONBA_PTR_GET_DEFAULT(problemId_, "") };
    inline DescribeClientProblemTypeResponseBodyProblemTypes& setProblemId(string problemId) { DARABONBA_PTR_SET_VALUE(problemId_, problemId) };


    // problemType Field Functions 
    bool hasProblemType() const { return this->problemType_ != nullptr;};
    void deleteProblemType() { this->problemType_ = nullptr;};
    inline string problemType() const { DARABONBA_PTR_GET_DEFAULT(problemType_, "") };
    inline DescribeClientProblemTypeResponseBodyProblemTypes& setProblemType(string problemType) { DARABONBA_PTR_SET_VALUE(problemType_, problemType) };


  protected:
    // The description of the issue type.
    std::shared_ptr<string> problemDetail_ = nullptr;
    // The ID of the issue type.
    std::shared_ptr<string> problemId_ = nullptr;
    // The name of the issue type.
    std::shared_ptr<string> problemType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
