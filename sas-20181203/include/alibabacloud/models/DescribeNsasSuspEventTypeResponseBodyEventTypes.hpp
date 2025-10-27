// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENSASSUSPEVENTTYPERESPONSEBODYEVENTTYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENSASSUSPEVENTTYPERESPONSEBODYEVENTTYPES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeNsasSuspEventTypeResponseBodyEventTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNsasSuspEventTypeResponseBodyEventTypes& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SuspEventCount, suspEventCount_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNsasSuspEventTypeResponseBodyEventTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SuspEventCount, suspEventCount_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeNsasSuspEventTypeResponseBodyEventTypes() = default ;
    DescribeNsasSuspEventTypeResponseBodyEventTypes(const DescribeNsasSuspEventTypeResponseBodyEventTypes &) = default ;
    DescribeNsasSuspEventTypeResponseBodyEventTypes(DescribeNsasSuspEventTypeResponseBodyEventTypes &&) = default ;
    DescribeNsasSuspEventTypeResponseBodyEventTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNsasSuspEventTypeResponseBodyEventTypes() = default ;
    DescribeNsasSuspEventTypeResponseBodyEventTypes& operator=(const DescribeNsasSuspEventTypeResponseBodyEventTypes &) = default ;
    DescribeNsasSuspEventTypeResponseBodyEventTypes& operator=(DescribeNsasSuspEventTypeResponseBodyEventTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->suspEventCount_ == nullptr && return this->type_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeNsasSuspEventTypeResponseBodyEventTypes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // suspEventCount Field Functions 
    bool hasSuspEventCount() const { return this->suspEventCount_ != nullptr;};
    void deleteSuspEventCount() { this->suspEventCount_ = nullptr;};
    inline int32_t suspEventCount() const { DARABONBA_PTR_GET_DEFAULT(suspEventCount_, 0) };
    inline DescribeNsasSuspEventTypeResponseBodyEventTypes& setSuspEventCount(int32_t suspEventCount) { DARABONBA_PTR_SET_VALUE(suspEventCount_, suspEventCount) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeNsasSuspEventTypeResponseBodyEventTypes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the alert type.
    std::shared_ptr<string> name_ = nullptr;
    // The number of assets for which an alert of the type is generated.
    std::shared_ptr<int32_t> suspEventCount_ = nullptr;
    // The alert type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
