// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPARTMENTSAVESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEPARTMENTSAVESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class DepartmentSaveShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DepartmentSaveShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(depart_list, departListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DepartmentSaveShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(depart_list, departListShrink_);
    };
    DepartmentSaveShrinkRequest() = default ;
    DepartmentSaveShrinkRequest(const DepartmentSaveShrinkRequest &) = default ;
    DepartmentSaveShrinkRequest(DepartmentSaveShrinkRequest &&) = default ;
    DepartmentSaveShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DepartmentSaveShrinkRequest() = default ;
    DepartmentSaveShrinkRequest& operator=(const DepartmentSaveShrinkRequest &) = default ;
    DepartmentSaveShrinkRequest& operator=(DepartmentSaveShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->departListShrink_ != nullptr; };
    // departListShrink Field Functions 
    bool hasDepartListShrink() const { return this->departListShrink_ != nullptr;};
    void deleteDepartListShrink() { this->departListShrink_ = nullptr;};
    inline string departListShrink() const { DARABONBA_PTR_GET_DEFAULT(departListShrink_, "") };
    inline DepartmentSaveShrinkRequest& setDepartListShrink(string departListShrink) { DARABONBA_PTR_SET_VALUE(departListShrink_, departListShrink) };


  protected:
    std::shared_ptr<string> departListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
