// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETFIGURECLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETFIGURECLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FigureCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class BatchGetFigureClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetFigureClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FigureClusters, figureClusters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetFigureClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FigureClusters, figureClusters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchGetFigureClusterResponseBody() = default ;
    BatchGetFigureClusterResponseBody(const BatchGetFigureClusterResponseBody &) = default ;
    BatchGetFigureClusterResponseBody(BatchGetFigureClusterResponseBody &&) = default ;
    BatchGetFigureClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetFigureClusterResponseBody() = default ;
    BatchGetFigureClusterResponseBody& operator=(const BatchGetFigureClusterResponseBody &) = default ;
    BatchGetFigureClusterResponseBody& operator=(BatchGetFigureClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->figureClusters_ == nullptr
        && return this->requestId_ == nullptr; };
    // figureClusters Field Functions 
    bool hasFigureClusters() const { return this->figureClusters_ != nullptr;};
    void deleteFigureClusters() { this->figureClusters_ = nullptr;};
    inline const vector<FigureCluster> & figureClusters() const { DARABONBA_PTR_GET_CONST(figureClusters_, vector<FigureCluster>) };
    inline vector<FigureCluster> figureClusters() { DARABONBA_PTR_GET(figureClusters_, vector<FigureCluster>) };
    inline BatchGetFigureClusterResponseBody& setFigureClusters(const vector<FigureCluster> & figureClusters) { DARABONBA_PTR_SET_VALUE(figureClusters_, figureClusters) };
    inline BatchGetFigureClusterResponseBody& setFigureClusters(vector<FigureCluster> && figureClusters) { DARABONBA_PTR_SET_RVALUE(figureClusters_, figureClusters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchGetFigureClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The clusters.
    std::shared_ptr<vector<FigureCluster>> figureClusters_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
