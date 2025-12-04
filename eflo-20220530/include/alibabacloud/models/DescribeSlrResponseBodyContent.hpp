// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLRRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLRRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class DescribeSlrResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlrResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(HasRole, hasRole_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlrResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(HasRole, hasRole_);
    };
    DescribeSlrResponseBodyContent() = default ;
    DescribeSlrResponseBodyContent(const DescribeSlrResponseBodyContent &) = default ;
    DescribeSlrResponseBodyContent(DescribeSlrResponseBodyContent &&) = default ;
    DescribeSlrResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlrResponseBodyContent() = default ;
    DescribeSlrResponseBodyContent& operator=(const DescribeSlrResponseBodyContent &) = default ;
    DescribeSlrResponseBodyContent& operator=(DescribeSlrResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hasRole_ == nullptr; };
    // hasRole Field Functions 
    bool hasHasRole() const { return this->hasRole_ != nullptr;};
    void deleteHasRole() { this->hasRole_ = nullptr;};
    inline bool hasRole() const { DARABONBA_PTR_GET_DEFAULT(hasRole_, false) };
    inline DescribeSlrResponseBodyContent& setHasRole(bool hasRole) { DARABONBA_PTR_SET_VALUE(hasRole_, hasRole) };


  protected:
    // Whether the role exists
    std::shared_ptr<bool> hasRole_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
