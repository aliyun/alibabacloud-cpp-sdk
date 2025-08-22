// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTINERELATEDDOMAINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTINERELATEDDOMAINSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeRoutineRelatedDomainsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRoutineRelatedDomainsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRoutineRelatedDomainsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeRoutineRelatedDomainsRequest() = default ;
    DescribeRoutineRelatedDomainsRequest(const DescribeRoutineRelatedDomainsRequest &) = default ;
    DescribeRoutineRelatedDomainsRequest(DescribeRoutineRelatedDomainsRequest &&) = default ;
    DescribeRoutineRelatedDomainsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRoutineRelatedDomainsRequest() = default ;
    DescribeRoutineRelatedDomainsRequest& operator=(const DescribeRoutineRelatedDomainsRequest &) = default ;
    DescribeRoutineRelatedDomainsRequest& operator=(DescribeRoutineRelatedDomainsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeRoutineRelatedDomainsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The name of the routine. The name is unique in the same account.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
