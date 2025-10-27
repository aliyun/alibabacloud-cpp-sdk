// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCKERHUBIMAGERISKRANKINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDOCKERHUBIMAGERISKRANKINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetDockerhubImageRiskRankInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDockerhubImageRiskRankInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Types, types_);
    };
    friend void from_json(const Darabonba::Json& j, GetDockerhubImageRiskRankInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Types, types_);
    };
    GetDockerhubImageRiskRankInfoRequest() = default ;
    GetDockerhubImageRiskRankInfoRequest(const GetDockerhubImageRiskRankInfoRequest &) = default ;
    GetDockerhubImageRiskRankInfoRequest(GetDockerhubImageRiskRankInfoRequest &&) = default ;
    GetDockerhubImageRiskRankInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDockerhubImageRiskRankInfoRequest() = default ;
    GetDockerhubImageRiskRankInfoRequest& operator=(const GetDockerhubImageRiskRankInfoRequest &) = default ;
    GetDockerhubImageRiskRankInfoRequest& operator=(GetDockerhubImageRiskRankInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->types_ == nullptr; };
    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline const vector<string> & types() const { DARABONBA_PTR_GET_CONST(types_, vector<string>) };
    inline vector<string> types() { DARABONBA_PTR_GET(types_, vector<string>) };
    inline GetDockerhubImageRiskRankInfoRequest& setTypes(const vector<string> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
    inline GetDockerhubImageRiskRankInfoRequest& setTypes(vector<string> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


  protected:
    // The dimension types.
    std::shared_ptr<vector<string>> types_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
