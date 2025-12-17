// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSANITYCHECKTASKRESPONSEBODYCHECKDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETSANITYCHECKTASKRESPONSEBODYCHECKDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class GetSanityCheckTaskResponseBodyCheckDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSanityCheckTaskResponseBodyCheckDetails& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetSanityCheckTaskResponseBodyCheckDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetSanityCheckTaskResponseBodyCheckDetails() = default ;
    GetSanityCheckTaskResponseBodyCheckDetails(const GetSanityCheckTaskResponseBodyCheckDetails &) = default ;
    GetSanityCheckTaskResponseBodyCheckDetails(GetSanityCheckTaskResponseBodyCheckDetails &&) = default ;
    GetSanityCheckTaskResponseBodyCheckDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSanityCheckTaskResponseBodyCheckDetails() = default ;
    GetSanityCheckTaskResponseBodyCheckDetails& operator=(const GetSanityCheckTaskResponseBodyCheckDetails &) = default ;
    GetSanityCheckTaskResponseBodyCheckDetails& operator=(GetSanityCheckTaskResponseBodyCheckDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->name_ == nullptr && return this->reason_ == nullptr && return this->result_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetSanityCheckTaskResponseBodyCheckDetails& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSanityCheckTaskResponseBodyCheckDetails& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline GetSanityCheckTaskResponseBodyCheckDetails& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline GetSanityCheckTaskResponseBodyCheckDetails& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<string> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
