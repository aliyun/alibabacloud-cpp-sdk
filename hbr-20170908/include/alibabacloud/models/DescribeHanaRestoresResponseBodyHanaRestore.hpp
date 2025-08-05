// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHANARESTORESRESPONSEBODYHANARESTORE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHANARESTORESRESPONSEBODYHANARESTORE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeHanaRestoresResponseBodyHanaRestore : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHanaRestoresResponseBodyHanaRestore& obj) { 
      DARABONBA_PTR_TO_JSON(HanaRestores, hanaRestores_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHanaRestoresResponseBodyHanaRestore& obj) { 
      DARABONBA_PTR_FROM_JSON(HanaRestores, hanaRestores_);
    };
    DescribeHanaRestoresResponseBodyHanaRestore() = default ;
    DescribeHanaRestoresResponseBodyHanaRestore(const DescribeHanaRestoresResponseBodyHanaRestore &) = default ;
    DescribeHanaRestoresResponseBodyHanaRestore(DescribeHanaRestoresResponseBodyHanaRestore &&) = default ;
    DescribeHanaRestoresResponseBodyHanaRestore(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHanaRestoresResponseBodyHanaRestore() = default ;
    DescribeHanaRestoresResponseBodyHanaRestore& operator=(const DescribeHanaRestoresResponseBodyHanaRestore &) = default ;
    DescribeHanaRestoresResponseBodyHanaRestore& operator=(DescribeHanaRestoresResponseBodyHanaRestore &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hanaRestores_ != nullptr; };
    // hanaRestores Field Functions 
    bool hasHanaRestores() const { return this->hanaRestores_ != nullptr;};
    void deleteHanaRestores() { this->hanaRestores_ = nullptr;};
    inline const vector<Models::DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores> & hanaRestores() const { DARABONBA_PTR_GET_CONST(hanaRestores_, vector<Models::DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores>) };
    inline vector<Models::DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores> hanaRestores() { DARABONBA_PTR_GET(hanaRestores_, vector<Models::DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores>) };
    inline DescribeHanaRestoresResponseBodyHanaRestore& setHanaRestores(const vector<Models::DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores> & hanaRestores) { DARABONBA_PTR_SET_VALUE(hanaRestores_, hanaRestores) };
    inline DescribeHanaRestoresResponseBodyHanaRestore& setHanaRestores(vector<Models::DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores> && hanaRestores) { DARABONBA_PTR_SET_RVALUE(hanaRestores_, hanaRestores) };


  protected:
    std::shared_ptr<vector<Models::DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores>> hanaRestores_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
