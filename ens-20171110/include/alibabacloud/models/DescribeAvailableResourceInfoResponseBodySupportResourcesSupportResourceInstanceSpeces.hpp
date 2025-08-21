// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEINFORESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCEINSTANCESPECES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEINFORESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCEINSTANCESPECES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceInstanceSpeces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceInstanceSpeces& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceInstanceSpeces& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
    };
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceInstanceSpeces() = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceInstanceSpeces(const DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceInstanceSpeces &) = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceInstanceSpeces(DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceInstanceSpeces &&) = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceInstanceSpeces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceInstanceSpeces() = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceInstanceSpeces& operator=(const DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceInstanceSpeces &) = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceInstanceSpeces& operator=(DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceInstanceSpeces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceSpec_ != nullptr; };
    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline const vector<string> & instanceSpec() const { DARABONBA_PTR_GET_CONST(instanceSpec_, vector<string>) };
    inline vector<string> instanceSpec() { DARABONBA_PTR_GET(instanceSpec_, vector<string>) };
    inline DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceInstanceSpeces& setInstanceSpec(const vector<string> & instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };
    inline DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceInstanceSpeces& setInstanceSpec(vector<string> && instanceSpec) { DARABONBA_PTR_SET_RVALUE(instanceSpec_, instanceSpec) };


  protected:
    std::shared_ptr<vector<string>> instanceSpec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
