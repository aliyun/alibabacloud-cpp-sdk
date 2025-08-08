// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEORDERRESPONSEBODYSUPPLIERTELEPHONES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEORDERRESPONSEBODYSUPPLIERTELEPHONES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeOrderResponseBodySupplierTelephones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOrderResponseBodySupplierTelephones& obj) { 
      DARABONBA_PTR_TO_JSON(Telephone, telephone_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOrderResponseBodySupplierTelephones& obj) { 
      DARABONBA_PTR_FROM_JSON(Telephone, telephone_);
    };
    DescribeOrderResponseBodySupplierTelephones() = default ;
    DescribeOrderResponseBodySupplierTelephones(const DescribeOrderResponseBodySupplierTelephones &) = default ;
    DescribeOrderResponseBodySupplierTelephones(DescribeOrderResponseBodySupplierTelephones &&) = default ;
    DescribeOrderResponseBodySupplierTelephones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOrderResponseBodySupplierTelephones() = default ;
    DescribeOrderResponseBodySupplierTelephones& operator=(const DescribeOrderResponseBodySupplierTelephones &) = default ;
    DescribeOrderResponseBodySupplierTelephones& operator=(DescribeOrderResponseBodySupplierTelephones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->telephone_ != nullptr; };
    // telephone Field Functions 
    bool hasTelephone() const { return this->telephone_ != nullptr;};
    void deleteTelephone() { this->telephone_ = nullptr;};
    inline const vector<string> & telephone() const { DARABONBA_PTR_GET_CONST(telephone_, vector<string>) };
    inline vector<string> telephone() { DARABONBA_PTR_GET(telephone_, vector<string>) };
    inline DescribeOrderResponseBodySupplierTelephones& setTelephone(const vector<string> & telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };
    inline DescribeOrderResponseBodySupplierTelephones& setTelephone(vector<string> && telephone) { DARABONBA_PTR_SET_RVALUE(telephone_, telephone) };


  protected:
    std::shared_ptr<vector<string>> telephone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
