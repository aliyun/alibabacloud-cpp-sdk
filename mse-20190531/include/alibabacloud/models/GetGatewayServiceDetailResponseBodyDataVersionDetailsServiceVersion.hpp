// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYSERVICEDETAILRESPONSEBODYDATAVERSIONDETAILSSERVICEVERSION_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYSERVICEDETAILRESPONSEBODYDATAVERSIONDETAILSSERVICEVERSION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersionLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion& obj) { 
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion& obj) { 
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion() = default ;
    GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion(const GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion &) = default ;
    GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion(GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion &&) = default ;
    GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion() = default ;
    GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion& operator=(const GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion &) = default ;
    GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion& operator=(GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labels_ == nullptr
        && return this->name_ == nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersionLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersionLabels>) };
    inline vector<Models::GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersionLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersionLabels>) };
    inline GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion& setLabels(const vector<Models::GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersionLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion& setLabels(vector<Models::GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersionLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The tag.
    std::shared_ptr<vector<Models::GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersionLabels>> labels_ = nullptr;
    // The version number.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
