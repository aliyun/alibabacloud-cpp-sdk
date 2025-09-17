// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHMETERINGDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHMETERINGDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PushMeteringDataRequestMeteringData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketplaceIntl20221230
{
namespace Models
{
  class PushMeteringDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushMeteringDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(MeteringData, meteringData_);
    };
    friend void from_json(const Darabonba::Json& j, PushMeteringDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(MeteringData, meteringData_);
    };
    PushMeteringDataRequest() = default ;
    PushMeteringDataRequest(const PushMeteringDataRequest &) = default ;
    PushMeteringDataRequest(PushMeteringDataRequest &&) = default ;
    PushMeteringDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushMeteringDataRequest() = default ;
    PushMeteringDataRequest& operator=(const PushMeteringDataRequest &) = default ;
    PushMeteringDataRequest& operator=(PushMeteringDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gmtCreate_ != nullptr
        && this->meteringData_ != nullptr; };
    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline PushMeteringDataRequest& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // meteringData Field Functions 
    bool hasMeteringData() const { return this->meteringData_ != nullptr;};
    void deleteMeteringData() { this->meteringData_ = nullptr;};
    inline const vector<PushMeteringDataRequestMeteringData> & meteringData() const { DARABONBA_PTR_GET_CONST(meteringData_, vector<PushMeteringDataRequestMeteringData>) };
    inline vector<PushMeteringDataRequestMeteringData> meteringData() { DARABONBA_PTR_GET(meteringData_, vector<PushMeteringDataRequestMeteringData>) };
    inline PushMeteringDataRequest& setMeteringData(const vector<PushMeteringDataRequestMeteringData> & meteringData) { DARABONBA_PTR_SET_VALUE(meteringData_, meteringData) };
    inline PushMeteringDataRequest& setMeteringData(vector<PushMeteringDataRequestMeteringData> && meteringData) { DARABONBA_PTR_SET_RVALUE(meteringData_, meteringData) };


  protected:
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<vector<PushMeteringDataRequestMeteringData>> meteringData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketplaceIntl20221230
#endif
