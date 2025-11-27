// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSRESPONSEBODYUSERSEXTRAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSRESPONSEBODYUSERSEXTRAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeUsersResponseBodyUsersExtras : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsersResponseBodyUsersExtras& obj) { 
      DARABONBA_ANY_TO_JSON(AssignedResourceCount, assignedResourceCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsersResponseBodyUsersExtras& obj) { 
      DARABONBA_ANY_FROM_JSON(AssignedResourceCount, assignedResourceCount_);
    };
    DescribeUsersResponseBodyUsersExtras() = default ;
    DescribeUsersResponseBodyUsersExtras(const DescribeUsersResponseBodyUsersExtras &) = default ;
    DescribeUsersResponseBodyUsersExtras(DescribeUsersResponseBodyUsersExtras &&) = default ;
    DescribeUsersResponseBodyUsersExtras(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsersResponseBodyUsersExtras() = default ;
    DescribeUsersResponseBodyUsersExtras& operator=(const DescribeUsersResponseBodyUsersExtras &) = default ;
    DescribeUsersResponseBodyUsersExtras& operator=(DescribeUsersResponseBodyUsersExtras &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignedResourceCount_ == nullptr; };
    // assignedResourceCount Field Functions 
    bool hasAssignedResourceCount() const { return this->assignedResourceCount_ != nullptr;};
    void deleteAssignedResourceCount() { this->assignedResourceCount_ = nullptr;};
    inline     const Darabonba::Json & assignedResourceCount() const { DARABONBA_GET(assignedResourceCount_) };
    Darabonba::Json & assignedResourceCount() { DARABONBA_GET(assignedResourceCount_) };
    inline DescribeUsersResponseBodyUsersExtras& setAssignedResourceCount(const Darabonba::Json & assignedResourceCount) { DARABONBA_SET_VALUE(assignedResourceCount_, assignedResourceCount) };
    inline DescribeUsersResponseBodyUsersExtras& setAssignedResourceCount(Darabonba::Json & assignedResourceCount) { DARABONBA_SET_RVALUE(assignedResourceCount_, assignedResourceCount) };


  protected:
    Darabonba::Json assignedResourceCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
