// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVAULTSRESPONSEBODYVAULTSVAULTSOURCETYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVAULTSRESPONSEBODYVAULTSVAULTSOURCETYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeVaultsResponseBodyVaultsVaultSourceTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVaultsResponseBodyVaultsVaultSourceTypes& obj) { 
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVaultsResponseBodyVaultsVaultSourceTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    DescribeVaultsResponseBodyVaultsVaultSourceTypes() = default ;
    DescribeVaultsResponseBodyVaultsVaultSourceTypes(const DescribeVaultsResponseBodyVaultsVaultSourceTypes &) = default ;
    DescribeVaultsResponseBodyVaultsVaultSourceTypes(DescribeVaultsResponseBodyVaultsVaultSourceTypes &&) = default ;
    DescribeVaultsResponseBodyVaultsVaultSourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVaultsResponseBodyVaultsVaultSourceTypes() = default ;
    DescribeVaultsResponseBodyVaultsVaultSourceTypes& operator=(const DescribeVaultsResponseBodyVaultsVaultSourceTypes &) = default ;
    DescribeVaultsResponseBodyVaultsVaultSourceTypes& operator=(DescribeVaultsResponseBodyVaultsVaultSourceTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceType_ == nullptr; };
    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline const vector<string> & sourceType() const { DARABONBA_PTR_GET_CONST(sourceType_, vector<string>) };
    inline vector<string> sourceType() { DARABONBA_PTR_GET(sourceType_, vector<string>) };
    inline DescribeVaultsResponseBodyVaultsVaultSourceTypes& setSourceType(const vector<string> & sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };
    inline DescribeVaultsResponseBodyVaultsVaultSourceTypes& setSourceType(vector<string> && sourceType) { DARABONBA_PTR_SET_RVALUE(sourceType_, sourceType) };


  protected:
    std::shared_ptr<vector<string>> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
