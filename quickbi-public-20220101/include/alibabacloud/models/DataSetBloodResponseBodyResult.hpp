// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASETBLOODRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DATASETBLOODRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class DataSetBloodResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataSetBloodResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(WorksId, worksId_);
      DARABONBA_PTR_TO_JSON(WorksType, worksType_);
    };
    friend void from_json(const Darabonba::Json& j, DataSetBloodResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(WorksId, worksId_);
      DARABONBA_PTR_FROM_JSON(WorksType, worksType_);
    };
    DataSetBloodResponseBodyResult() = default ;
    DataSetBloodResponseBodyResult(const DataSetBloodResponseBodyResult &) = default ;
    DataSetBloodResponseBodyResult(DataSetBloodResponseBodyResult &&) = default ;
    DataSetBloodResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataSetBloodResponseBodyResult() = default ;
    DataSetBloodResponseBodyResult& operator=(const DataSetBloodResponseBodyResult &) = default ;
    DataSetBloodResponseBodyResult& operator=(DataSetBloodResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->worksId_ == nullptr
        && return this->worksType_ == nullptr; };
    // worksId Field Functions 
    bool hasWorksId() const { return this->worksId_ != nullptr;};
    void deleteWorksId() { this->worksId_ = nullptr;};
    inline string worksId() const { DARABONBA_PTR_GET_DEFAULT(worksId_, "") };
    inline DataSetBloodResponseBodyResult& setWorksId(string worksId) { DARABONBA_PTR_SET_VALUE(worksId_, worksId) };


    // worksType Field Functions 
    bool hasWorksType() const { return this->worksType_ != nullptr;};
    void deleteWorksType() { this->worksType_ = nullptr;};
    inline string worksType() const { DARABONBA_PTR_GET_DEFAULT(worksType_, "") };
    inline DataSetBloodResponseBodyResult& setWorksType(string worksType) { DARABONBA_PTR_SET_VALUE(worksType_, worksType) };


  protected:
    // Work ID.
    std::shared_ptr<string> worksId_ = nullptr;
    // Work types: - REPORT: 
    // - REPORT: Workbooks
    // - dashboardOfflineQuery: Downloads
    // - DASHBOARD: Dashboard
    // - ANALYSIS: Ad Hoc Analysis
    // - SCREEN: Visualization Screen
    // - PAGE: Old dashboard
    std::shared_ptr<string> worksType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
