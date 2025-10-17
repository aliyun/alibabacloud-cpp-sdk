// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONATTRIBUTERESPONSEBODYSECURITYIPARRAYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONATTRIBUTERESPONSEBODYSECURITYIPARRAYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationAttributeResponseBodySecurityIPArrays : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationAttributeResponseBodySecurityIPArrays& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityIPArrayName, securityIPArrayName_);
      DARABONBA_PTR_TO_JSON(SecurityIPArrayTag, securityIPArrayTag_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(SecurityIPNetType, securityIPNetType_);
      DARABONBA_PTR_TO_JSON(SecurityIPType, securityIPType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationAttributeResponseBodySecurityIPArrays& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityIPArrayName, securityIPArrayName_);
      DARABONBA_PTR_FROM_JSON(SecurityIPArrayTag, securityIPArrayTag_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(SecurityIPNetType, securityIPNetType_);
      DARABONBA_PTR_FROM_JSON(SecurityIPType, securityIPType_);
    };
    DescribeApplicationAttributeResponseBodySecurityIPArrays() = default ;
    DescribeApplicationAttributeResponseBodySecurityIPArrays(const DescribeApplicationAttributeResponseBodySecurityIPArrays &) = default ;
    DescribeApplicationAttributeResponseBodySecurityIPArrays(DescribeApplicationAttributeResponseBodySecurityIPArrays &&) = default ;
    DescribeApplicationAttributeResponseBodySecurityIPArrays(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationAttributeResponseBodySecurityIPArrays() = default ;
    DescribeApplicationAttributeResponseBodySecurityIPArrays& operator=(const DescribeApplicationAttributeResponseBodySecurityIPArrays &) = default ;
    DescribeApplicationAttributeResponseBodySecurityIPArrays& operator=(DescribeApplicationAttributeResponseBodySecurityIPArrays &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityIPArrayName_ == nullptr
        && return this->securityIPArrayTag_ == nullptr && return this->securityIPList_ == nullptr && return this->securityIPNetType_ == nullptr && return this->securityIPType_ == nullptr; };
    // securityIPArrayName Field Functions 
    bool hasSecurityIPArrayName() const { return this->securityIPArrayName_ != nullptr;};
    void deleteSecurityIPArrayName() { this->securityIPArrayName_ = nullptr;};
    inline string securityIPArrayName() const { DARABONBA_PTR_GET_DEFAULT(securityIPArrayName_, "") };
    inline DescribeApplicationAttributeResponseBodySecurityIPArrays& setSecurityIPArrayName(string securityIPArrayName) { DARABONBA_PTR_SET_VALUE(securityIPArrayName_, securityIPArrayName) };


    // securityIPArrayTag Field Functions 
    bool hasSecurityIPArrayTag() const { return this->securityIPArrayTag_ != nullptr;};
    void deleteSecurityIPArrayTag() { this->securityIPArrayTag_ = nullptr;};
    inline string securityIPArrayTag() const { DARABONBA_PTR_GET_DEFAULT(securityIPArrayTag_, "") };
    inline DescribeApplicationAttributeResponseBodySecurityIPArrays& setSecurityIPArrayTag(string securityIPArrayTag) { DARABONBA_PTR_SET_VALUE(securityIPArrayTag_, securityIPArrayTag) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline DescribeApplicationAttributeResponseBodySecurityIPArrays& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // securityIPNetType Field Functions 
    bool hasSecurityIPNetType() const { return this->securityIPNetType_ != nullptr;};
    void deleteSecurityIPNetType() { this->securityIPNetType_ = nullptr;};
    inline string securityIPNetType() const { DARABONBA_PTR_GET_DEFAULT(securityIPNetType_, "") };
    inline DescribeApplicationAttributeResponseBodySecurityIPArrays& setSecurityIPNetType(string securityIPNetType) { DARABONBA_PTR_SET_VALUE(securityIPNetType_, securityIPNetType) };


    // securityIPType Field Functions 
    bool hasSecurityIPType() const { return this->securityIPType_ != nullptr;};
    void deleteSecurityIPType() { this->securityIPType_ = nullptr;};
    inline string securityIPType() const { DARABONBA_PTR_GET_DEFAULT(securityIPType_, "") };
    inline DescribeApplicationAttributeResponseBodySecurityIPArrays& setSecurityIPType(string securityIPType) { DARABONBA_PTR_SET_VALUE(securityIPType_, securityIPType) };


  protected:
    std::shared_ptr<string> securityIPArrayName_ = nullptr;
    std::shared_ptr<string> securityIPArrayTag_ = nullptr;
    std::shared_ptr<string> securityIPList_ = nullptr;
    std::shared_ptr<string> securityIPNetType_ = nullptr;
    std::shared_ptr<string> securityIPType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
