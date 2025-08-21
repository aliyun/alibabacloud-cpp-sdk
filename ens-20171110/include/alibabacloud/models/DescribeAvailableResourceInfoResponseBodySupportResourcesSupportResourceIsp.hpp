// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEINFORESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCEISP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEINFORESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCEISP_HPP_
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
  class DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceIsp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceIsp& obj) { 
      DARABONBA_PTR_TO_JSON(Isp, isp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceIsp& obj) { 
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
    };
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceIsp() = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceIsp(const DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceIsp &) = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceIsp(DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceIsp &&) = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceIsp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceIsp() = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceIsp& operator=(const DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceIsp &) = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceIsp& operator=(DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceIsp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isp_ != nullptr; };
    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline const vector<string> & isp() const { DARABONBA_PTR_GET_CONST(isp_, vector<string>) };
    inline vector<string> isp() { DARABONBA_PTR_GET(isp_, vector<string>) };
    inline DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceIsp& setIsp(const vector<string> & isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };
    inline DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceIsp& setIsp(vector<string> && isp) { DARABONBA_PTR_SET_RVALUE(isp_, isp) };


  protected:
    std::shared_ptr<vector<string>> isp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
