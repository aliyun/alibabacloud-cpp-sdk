// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMROBOTSRESPONSEBODYPAGEBEANALERTIMROBOTSDISPATCHRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMROBOTSRESPONSEBODYPAGEBEANALERTIMROBOTSDISPATCHRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeIMRobotsResponseBodyPageBeanAlertIMRobotsDispatchRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIMRobotsResponseBodyPageBeanAlertIMRobotsDispatchRules& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIMRobotsResponseBodyPageBeanAlertIMRobotsDispatchRules& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    DescribeIMRobotsResponseBodyPageBeanAlertIMRobotsDispatchRules() = default ;
    DescribeIMRobotsResponseBodyPageBeanAlertIMRobotsDispatchRules(const DescribeIMRobotsResponseBodyPageBeanAlertIMRobotsDispatchRules &) = default ;
    DescribeIMRobotsResponseBodyPageBeanAlertIMRobotsDispatchRules(DescribeIMRobotsResponseBodyPageBeanAlertIMRobotsDispatchRules &&) = default ;
    DescribeIMRobotsResponseBodyPageBeanAlertIMRobotsDispatchRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIMRobotsResponseBodyPageBeanAlertIMRobotsDispatchRules() = default ;
    DescribeIMRobotsResponseBodyPageBeanAlertIMRobotsDispatchRules& operator=(const DescribeIMRobotsResponseBodyPageBeanAlertIMRobotsDispatchRules &) = default ;
    DescribeIMRobotsResponseBodyPageBeanAlertIMRobotsDispatchRules& operator=(DescribeIMRobotsResponseBodyPageBeanAlertIMRobotsDispatchRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->name_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeIMRobotsResponseBodyPageBeanAlertIMRobotsDispatchRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeIMRobotsResponseBodyPageBeanAlertIMRobotsDispatchRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The ID of the notification policy.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the notification policy.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
