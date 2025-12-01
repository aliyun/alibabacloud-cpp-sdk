// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDETAILBYIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDETAILBYIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDetailByIdResponseBodyDataVulDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetDetailByIdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDetailByIdResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(VulDetails, vulDetails_);
    };
    friend void from_json(const Darabonba::Json& j, GetDetailByIdResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(VulDetails, vulDetails_);
    };
    GetDetailByIdResponseBodyData() = default ;
    GetDetailByIdResponseBodyData(const GetDetailByIdResponseBodyData &) = default ;
    GetDetailByIdResponseBodyData(GetDetailByIdResponseBodyData &&) = default ;
    GetDetailByIdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDetailByIdResponseBodyData() = default ;
    GetDetailByIdResponseBodyData& operator=(const GetDetailByIdResponseBodyData &) = default ;
    GetDetailByIdResponseBodyData& operator=(GetDetailByIdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vulDetails_ == nullptr; };
    // vulDetails Field Functions 
    bool hasVulDetails() const { return this->vulDetails_ != nullptr;};
    void deleteVulDetails() { this->vulDetails_ = nullptr;};
    inline const vector<Models::GetDetailByIdResponseBodyDataVulDetails> & vulDetails() const { DARABONBA_PTR_GET_CONST(vulDetails_, vector<Models::GetDetailByIdResponseBodyDataVulDetails>) };
    inline vector<Models::GetDetailByIdResponseBodyDataVulDetails> vulDetails() { DARABONBA_PTR_GET(vulDetails_, vector<Models::GetDetailByIdResponseBodyDataVulDetails>) };
    inline GetDetailByIdResponseBodyData& setVulDetails(const vector<Models::GetDetailByIdResponseBodyDataVulDetails> & vulDetails) { DARABONBA_PTR_SET_VALUE(vulDetails_, vulDetails) };
    inline GetDetailByIdResponseBodyData& setVulDetails(vector<Models::GetDetailByIdResponseBodyDataVulDetails> && vulDetails) { DARABONBA_PTR_SET_RVALUE(vulDetails_, vulDetails) };


  protected:
    // Vulnerability details.
    std::shared_ptr<vector<Models::GetDetailByIdResponseBodyDataVulDetails>> vulDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
