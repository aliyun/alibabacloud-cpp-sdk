// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METADATAINFOLISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_METADATAINFOLISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MetadataInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MetadataInfoListResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetadataInfoListResult& obj) { 
      DARABONBA_PTR_TO_JSON(metadataInfos, metadataInfos_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, MetadataInfoListResult& obj) { 
      DARABONBA_PTR_FROM_JSON(metadataInfos, metadataInfos_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    MetadataInfoListResult() = default ;
    MetadataInfoListResult(const MetadataInfoListResult &) = default ;
    MetadataInfoListResult(MetadataInfoListResult &&) = default ;
    MetadataInfoListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetadataInfoListResult() = default ;
    MetadataInfoListResult& operator=(const MetadataInfoListResult &) = default ;
    MetadataInfoListResult& operator=(MetadataInfoListResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metadataInfos_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // metadataInfos Field Functions 
    bool hasMetadataInfos() const { return this->metadataInfos_ != nullptr;};
    void deleteMetadataInfos() { this->metadataInfos_ = nullptr;};
    inline const vector<MetadataInfo> & getMetadataInfos() const { DARABONBA_PTR_GET_CONST(metadataInfos_, vector<MetadataInfo>) };
    inline vector<MetadataInfo> getMetadataInfos() { DARABONBA_PTR_GET(metadataInfos_, vector<MetadataInfo>) };
    inline MetadataInfoListResult& setMetadataInfos(const vector<MetadataInfo> & metadataInfos) { DARABONBA_PTR_SET_VALUE(metadataInfos_, metadataInfos) };
    inline MetadataInfoListResult& setMetadataInfos(vector<MetadataInfo> && metadataInfos) { DARABONBA_PTR_SET_RVALUE(metadataInfos_, metadataInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MetadataInfoListResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline MetadataInfoListResult& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<MetadataInfo>> metadataInfos_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
