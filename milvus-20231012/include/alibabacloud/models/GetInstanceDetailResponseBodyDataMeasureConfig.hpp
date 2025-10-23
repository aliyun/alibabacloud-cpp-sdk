// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEDETAILRESPONSEBODYDATAMEASURECONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEDETAILRESPONSEBODYDATAMEASURECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class GetInstanceDetailResponseBodyDataMeasureConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceDetailResponseBodyDataMeasureConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DataNodeCuNum, dataNodeCuNum_);
      DARABONBA_PTR_TO_JSON(DataNodeReplica, dataNodeReplica_);
      DARABONBA_PTR_TO_JSON(IndexNodeCuNum, indexNodeCuNum_);
      DARABONBA_PTR_TO_JSON(IndexNodeReplica, indexNodeReplica_);
      DARABONBA_PTR_TO_JSON(MixCoodinatorNodeCuNum, mixCoodinatorNodeCuNum_);
      DARABONBA_PTR_TO_JSON(MixCoodinatorNodeReplica, mixCoodinatorNodeReplica_);
      DARABONBA_PTR_TO_JSON(ProxyNodeCuNum, proxyNodeCuNum_);
      DARABONBA_PTR_TO_JSON(ProxyNodeReplica, proxyNodeReplica_);
      DARABONBA_PTR_TO_JSON(QueryNodeCuNum, queryNodeCuNum_);
      DARABONBA_PTR_TO_JSON(QueryNodeReplica, queryNodeReplica_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceDetailResponseBodyDataMeasureConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DataNodeCuNum, dataNodeCuNum_);
      DARABONBA_PTR_FROM_JSON(DataNodeReplica, dataNodeReplica_);
      DARABONBA_PTR_FROM_JSON(IndexNodeCuNum, indexNodeCuNum_);
      DARABONBA_PTR_FROM_JSON(IndexNodeReplica, indexNodeReplica_);
      DARABONBA_PTR_FROM_JSON(MixCoodinatorNodeCuNum, mixCoodinatorNodeCuNum_);
      DARABONBA_PTR_FROM_JSON(MixCoodinatorNodeReplica, mixCoodinatorNodeReplica_);
      DARABONBA_PTR_FROM_JSON(ProxyNodeCuNum, proxyNodeCuNum_);
      DARABONBA_PTR_FROM_JSON(ProxyNodeReplica, proxyNodeReplica_);
      DARABONBA_PTR_FROM_JSON(QueryNodeCuNum, queryNodeCuNum_);
      DARABONBA_PTR_FROM_JSON(QueryNodeReplica, queryNodeReplica_);
    };
    GetInstanceDetailResponseBodyDataMeasureConfig() = default ;
    GetInstanceDetailResponseBodyDataMeasureConfig(const GetInstanceDetailResponseBodyDataMeasureConfig &) = default ;
    GetInstanceDetailResponseBodyDataMeasureConfig(GetInstanceDetailResponseBodyDataMeasureConfig &&) = default ;
    GetInstanceDetailResponseBodyDataMeasureConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceDetailResponseBodyDataMeasureConfig() = default ;
    GetInstanceDetailResponseBodyDataMeasureConfig& operator=(const GetInstanceDetailResponseBodyDataMeasureConfig &) = default ;
    GetInstanceDetailResponseBodyDataMeasureConfig& operator=(GetInstanceDetailResponseBodyDataMeasureConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataNodeCuNum_ == nullptr
        && return this->dataNodeReplica_ == nullptr && return this->indexNodeCuNum_ == nullptr && return this->indexNodeReplica_ == nullptr && return this->mixCoodinatorNodeCuNum_ == nullptr && return this->mixCoodinatorNodeReplica_ == nullptr
        && return this->proxyNodeCuNum_ == nullptr && return this->proxyNodeReplica_ == nullptr && return this->queryNodeCuNum_ == nullptr && return this->queryNodeReplica_ == nullptr; };
    // dataNodeCuNum Field Functions 
    bool hasDataNodeCuNum() const { return this->dataNodeCuNum_ != nullptr;};
    void deleteDataNodeCuNum() { this->dataNodeCuNum_ = nullptr;};
    inline int32_t dataNodeCuNum() const { DARABONBA_PTR_GET_DEFAULT(dataNodeCuNum_, 0) };
    inline GetInstanceDetailResponseBodyDataMeasureConfig& setDataNodeCuNum(int32_t dataNodeCuNum) { DARABONBA_PTR_SET_VALUE(dataNodeCuNum_, dataNodeCuNum) };


    // dataNodeReplica Field Functions 
    bool hasDataNodeReplica() const { return this->dataNodeReplica_ != nullptr;};
    void deleteDataNodeReplica() { this->dataNodeReplica_ = nullptr;};
    inline int32_t dataNodeReplica() const { DARABONBA_PTR_GET_DEFAULT(dataNodeReplica_, 0) };
    inline GetInstanceDetailResponseBodyDataMeasureConfig& setDataNodeReplica(int32_t dataNodeReplica) { DARABONBA_PTR_SET_VALUE(dataNodeReplica_, dataNodeReplica) };


    // indexNodeCuNum Field Functions 
    bool hasIndexNodeCuNum() const { return this->indexNodeCuNum_ != nullptr;};
    void deleteIndexNodeCuNum() { this->indexNodeCuNum_ = nullptr;};
    inline int32_t indexNodeCuNum() const { DARABONBA_PTR_GET_DEFAULT(indexNodeCuNum_, 0) };
    inline GetInstanceDetailResponseBodyDataMeasureConfig& setIndexNodeCuNum(int32_t indexNodeCuNum) { DARABONBA_PTR_SET_VALUE(indexNodeCuNum_, indexNodeCuNum) };


    // indexNodeReplica Field Functions 
    bool hasIndexNodeReplica() const { return this->indexNodeReplica_ != nullptr;};
    void deleteIndexNodeReplica() { this->indexNodeReplica_ = nullptr;};
    inline int32_t indexNodeReplica() const { DARABONBA_PTR_GET_DEFAULT(indexNodeReplica_, 0) };
    inline GetInstanceDetailResponseBodyDataMeasureConfig& setIndexNodeReplica(int32_t indexNodeReplica) { DARABONBA_PTR_SET_VALUE(indexNodeReplica_, indexNodeReplica) };


    // mixCoodinatorNodeCuNum Field Functions 
    bool hasMixCoodinatorNodeCuNum() const { return this->mixCoodinatorNodeCuNum_ != nullptr;};
    void deleteMixCoodinatorNodeCuNum() { this->mixCoodinatorNodeCuNum_ = nullptr;};
    inline int32_t mixCoodinatorNodeCuNum() const { DARABONBA_PTR_GET_DEFAULT(mixCoodinatorNodeCuNum_, 0) };
    inline GetInstanceDetailResponseBodyDataMeasureConfig& setMixCoodinatorNodeCuNum(int32_t mixCoodinatorNodeCuNum) { DARABONBA_PTR_SET_VALUE(mixCoodinatorNodeCuNum_, mixCoodinatorNodeCuNum) };


    // mixCoodinatorNodeReplica Field Functions 
    bool hasMixCoodinatorNodeReplica() const { return this->mixCoodinatorNodeReplica_ != nullptr;};
    void deleteMixCoodinatorNodeReplica() { this->mixCoodinatorNodeReplica_ = nullptr;};
    inline int32_t mixCoodinatorNodeReplica() const { DARABONBA_PTR_GET_DEFAULT(mixCoodinatorNodeReplica_, 0) };
    inline GetInstanceDetailResponseBodyDataMeasureConfig& setMixCoodinatorNodeReplica(int32_t mixCoodinatorNodeReplica) { DARABONBA_PTR_SET_VALUE(mixCoodinatorNodeReplica_, mixCoodinatorNodeReplica) };


    // proxyNodeCuNum Field Functions 
    bool hasProxyNodeCuNum() const { return this->proxyNodeCuNum_ != nullptr;};
    void deleteProxyNodeCuNum() { this->proxyNodeCuNum_ = nullptr;};
    inline int32_t proxyNodeCuNum() const { DARABONBA_PTR_GET_DEFAULT(proxyNodeCuNum_, 0) };
    inline GetInstanceDetailResponseBodyDataMeasureConfig& setProxyNodeCuNum(int32_t proxyNodeCuNum) { DARABONBA_PTR_SET_VALUE(proxyNodeCuNum_, proxyNodeCuNum) };


    // proxyNodeReplica Field Functions 
    bool hasProxyNodeReplica() const { return this->proxyNodeReplica_ != nullptr;};
    void deleteProxyNodeReplica() { this->proxyNodeReplica_ = nullptr;};
    inline int32_t proxyNodeReplica() const { DARABONBA_PTR_GET_DEFAULT(proxyNodeReplica_, 0) };
    inline GetInstanceDetailResponseBodyDataMeasureConfig& setProxyNodeReplica(int32_t proxyNodeReplica) { DARABONBA_PTR_SET_VALUE(proxyNodeReplica_, proxyNodeReplica) };


    // queryNodeCuNum Field Functions 
    bool hasQueryNodeCuNum() const { return this->queryNodeCuNum_ != nullptr;};
    void deleteQueryNodeCuNum() { this->queryNodeCuNum_ = nullptr;};
    inline int32_t queryNodeCuNum() const { DARABONBA_PTR_GET_DEFAULT(queryNodeCuNum_, 0) };
    inline GetInstanceDetailResponseBodyDataMeasureConfig& setQueryNodeCuNum(int32_t queryNodeCuNum) { DARABONBA_PTR_SET_VALUE(queryNodeCuNum_, queryNodeCuNum) };


    // queryNodeReplica Field Functions 
    bool hasQueryNodeReplica() const { return this->queryNodeReplica_ != nullptr;};
    void deleteQueryNodeReplica() { this->queryNodeReplica_ = nullptr;};
    inline int32_t queryNodeReplica() const { DARABONBA_PTR_GET_DEFAULT(queryNodeReplica_, 0) };
    inline GetInstanceDetailResponseBodyDataMeasureConfig& setQueryNodeReplica(int32_t queryNodeReplica) { DARABONBA_PTR_SET_VALUE(queryNodeReplica_, queryNodeReplica) };


  protected:
    std::shared_ptr<int32_t> dataNodeCuNum_ = nullptr;
    std::shared_ptr<int32_t> dataNodeReplica_ = nullptr;
    std::shared_ptr<int32_t> indexNodeCuNum_ = nullptr;
    std::shared_ptr<int32_t> indexNodeReplica_ = nullptr;
    std::shared_ptr<int32_t> mixCoodinatorNodeCuNum_ = nullptr;
    std::shared_ptr<int32_t> mixCoodinatorNodeReplica_ = nullptr;
    std::shared_ptr<int32_t> proxyNodeCuNum_ = nullptr;
    std::shared_ptr<int32_t> proxyNodeReplica_ = nullptr;
    std::shared_ptr<int32_t> queryNodeCuNum_ = nullptr;
    std::shared_ptr<int32_t> queryNodeReplica_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
