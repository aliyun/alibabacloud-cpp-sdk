// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEXPERIMENTVISUALIZATIONDATARESPONSEBODYVISUALIZATIONDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYEXPERIMENTVISUALIZATIONDATARESPONSEBODYVISUALIZATIONDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class QueryExperimentVisualizationDataResponseBodyVisualizationData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryExperimentVisualizationDataResponseBodyVisualizationData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryExperimentVisualizationDataResponseBodyVisualizationData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    QueryExperimentVisualizationDataResponseBodyVisualizationData() = default ;
    QueryExperimentVisualizationDataResponseBodyVisualizationData(const QueryExperimentVisualizationDataResponseBodyVisualizationData &) = default ;
    QueryExperimentVisualizationDataResponseBodyVisualizationData(QueryExperimentVisualizationDataResponseBodyVisualizationData &&) = default ;
    QueryExperimentVisualizationDataResponseBodyVisualizationData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryExperimentVisualizationDataResponseBodyVisualizationData() = default ;
    QueryExperimentVisualizationDataResponseBodyVisualizationData& operator=(const QueryExperimentVisualizationDataResponseBodyVisualizationData &) = default ;
    QueryExperimentVisualizationDataResponseBodyVisualizationData& operator=(QueryExperimentVisualizationDataResponseBodyVisualizationData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->data_ == nullptr && return this->dataId_ == nullptr && return this->nodeId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryExperimentVisualizationDataResponseBodyVisualizationData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline QueryExperimentVisualizationDataResponseBodyVisualizationData& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline QueryExperimentVisualizationDataResponseBodyVisualizationData& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline QueryExperimentVisualizationDataResponseBodyVisualizationData& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> data_ = nullptr;
    std::shared_ptr<string> dataId_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
