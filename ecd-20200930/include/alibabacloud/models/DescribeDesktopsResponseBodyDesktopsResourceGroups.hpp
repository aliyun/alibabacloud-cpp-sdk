// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSRESPONSEBODYDESKTOPSRESOURCEGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSRESPONSEBODYDESKTOPSRESOURCEGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopsResponseBodyDesktopsResourceGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopsResponseBodyDesktopsResourceGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopsResponseBodyDesktopsResourceGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeDesktopsResponseBodyDesktopsResourceGroups() = default ;
    DescribeDesktopsResponseBodyDesktopsResourceGroups(const DescribeDesktopsResponseBodyDesktopsResourceGroups &) = default ;
    DescribeDesktopsResponseBodyDesktopsResourceGroups(DescribeDesktopsResponseBodyDesktopsResourceGroups &&) = default ;
    DescribeDesktopsResponseBodyDesktopsResourceGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopsResponseBodyDesktopsResourceGroups() = default ;
    DescribeDesktopsResponseBodyDesktopsResourceGroups& operator=(const DescribeDesktopsResponseBodyDesktopsResourceGroups &) = default ;
    DescribeDesktopsResponseBodyDesktopsResourceGroups& operator=(DescribeDesktopsResponseBodyDesktopsResourceGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->name_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeDesktopsResponseBodyDesktopsResourceGroups& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDesktopsResponseBodyDesktopsResourceGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The ID of the enterprise resource group.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the enterprise resource group.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
