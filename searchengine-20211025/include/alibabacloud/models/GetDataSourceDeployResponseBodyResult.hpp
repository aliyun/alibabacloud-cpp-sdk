// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASOURCEDEPLOYRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETDATASOURCEDEPLOYRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataSourceDeployResponseBodyResultExtend.hpp>
#include <alibabacloud/models/GetDataSourceDeployResponseBodyResultProcessor.hpp>
#include <alibabacloud/models/GetDataSourceDeployResponseBodyResultStorage.hpp>
#include <alibabacloud/models/GetDataSourceDeployResponseBodyResultSwift.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetDataSourceDeployResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataSourceDeployResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(autoBuildIndex, autoBuildIndex_);
      DARABONBA_PTR_TO_JSON(extend, extend_);
      DARABONBA_PTR_TO_JSON(processor, processor_);
      DARABONBA_PTR_TO_JSON(storage, storage_);
      DARABONBA_PTR_TO_JSON(swift, swift_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataSourceDeployResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(autoBuildIndex, autoBuildIndex_);
      DARABONBA_PTR_FROM_JSON(extend, extend_);
      DARABONBA_PTR_FROM_JSON(processor, processor_);
      DARABONBA_PTR_FROM_JSON(storage, storage_);
      DARABONBA_PTR_FROM_JSON(swift, swift_);
    };
    GetDataSourceDeployResponseBodyResult() = default ;
    GetDataSourceDeployResponseBodyResult(const GetDataSourceDeployResponseBodyResult &) = default ;
    GetDataSourceDeployResponseBodyResult(GetDataSourceDeployResponseBodyResult &&) = default ;
    GetDataSourceDeployResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataSourceDeployResponseBodyResult() = default ;
    GetDataSourceDeployResponseBodyResult& operator=(const GetDataSourceDeployResponseBodyResult &) = default ;
    GetDataSourceDeployResponseBodyResult& operator=(GetDataSourceDeployResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoBuildIndex_ != nullptr
        && this->extend_ != nullptr && this->processor_ != nullptr && this->storage_ != nullptr && this->swift_ != nullptr; };
    // autoBuildIndex Field Functions 
    bool hasAutoBuildIndex() const { return this->autoBuildIndex_ != nullptr;};
    void deleteAutoBuildIndex() { this->autoBuildIndex_ = nullptr;};
    inline bool autoBuildIndex() const { DARABONBA_PTR_GET_DEFAULT(autoBuildIndex_, false) };
    inline GetDataSourceDeployResponseBodyResult& setAutoBuildIndex(bool autoBuildIndex) { DARABONBA_PTR_SET_VALUE(autoBuildIndex_, autoBuildIndex) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline const Models::GetDataSourceDeployResponseBodyResultExtend & extend() const { DARABONBA_PTR_GET_CONST(extend_, Models::GetDataSourceDeployResponseBodyResultExtend) };
    inline Models::GetDataSourceDeployResponseBodyResultExtend extend() { DARABONBA_PTR_GET(extend_, Models::GetDataSourceDeployResponseBodyResultExtend) };
    inline GetDataSourceDeployResponseBodyResult& setExtend(const Models::GetDataSourceDeployResponseBodyResultExtend & extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };
    inline GetDataSourceDeployResponseBodyResult& setExtend(Models::GetDataSourceDeployResponseBodyResultExtend && extend) { DARABONBA_PTR_SET_RVALUE(extend_, extend) };


    // processor Field Functions 
    bool hasProcessor() const { return this->processor_ != nullptr;};
    void deleteProcessor() { this->processor_ = nullptr;};
    inline const Models::GetDataSourceDeployResponseBodyResultProcessor & processor() const { DARABONBA_PTR_GET_CONST(processor_, Models::GetDataSourceDeployResponseBodyResultProcessor) };
    inline Models::GetDataSourceDeployResponseBodyResultProcessor processor() { DARABONBA_PTR_GET(processor_, Models::GetDataSourceDeployResponseBodyResultProcessor) };
    inline GetDataSourceDeployResponseBodyResult& setProcessor(const Models::GetDataSourceDeployResponseBodyResultProcessor & processor) { DARABONBA_PTR_SET_VALUE(processor_, processor) };
    inline GetDataSourceDeployResponseBodyResult& setProcessor(Models::GetDataSourceDeployResponseBodyResultProcessor && processor) { DARABONBA_PTR_SET_RVALUE(processor_, processor) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline const Models::GetDataSourceDeployResponseBodyResultStorage & storage() const { DARABONBA_PTR_GET_CONST(storage_, Models::GetDataSourceDeployResponseBodyResultStorage) };
    inline Models::GetDataSourceDeployResponseBodyResultStorage storage() { DARABONBA_PTR_GET(storage_, Models::GetDataSourceDeployResponseBodyResultStorage) };
    inline GetDataSourceDeployResponseBodyResult& setStorage(const Models::GetDataSourceDeployResponseBodyResultStorage & storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };
    inline GetDataSourceDeployResponseBodyResult& setStorage(Models::GetDataSourceDeployResponseBodyResultStorage && storage) { DARABONBA_PTR_SET_RVALUE(storage_, storage) };


    // swift Field Functions 
    bool hasSwift() const { return this->swift_ != nullptr;};
    void deleteSwift() { this->swift_ = nullptr;};
    inline const Models::GetDataSourceDeployResponseBodyResultSwift & swift() const { DARABONBA_PTR_GET_CONST(swift_, Models::GetDataSourceDeployResponseBodyResultSwift) };
    inline Models::GetDataSourceDeployResponseBodyResultSwift swift() { DARABONBA_PTR_GET(swift_, Models::GetDataSourceDeployResponseBodyResultSwift) };
    inline GetDataSourceDeployResponseBodyResult& setSwift(const Models::GetDataSourceDeployResponseBodyResultSwift & swift) { DARABONBA_PTR_SET_VALUE(swift_, swift) };
    inline GetDataSourceDeployResponseBodyResult& setSwift(Models::GetDataSourceDeployResponseBodyResultSwift && swift) { DARABONBA_PTR_SET_RVALUE(swift_, swift) };


  protected:
    std::shared_ptr<bool> autoBuildIndex_ = nullptr;
    std::shared_ptr<Models::GetDataSourceDeployResponseBodyResultExtend> extend_ = nullptr;
    // The parameters of the process.
    std::shared_ptr<Models::GetDataSourceDeployResponseBodyResultProcessor> processor_ = nullptr;
    // The information about the data source.
    std::shared_ptr<Models::GetDataSourceDeployResponseBodyResultStorage> storage_ = nullptr;
    // The information about the incremental data source Swift.
    std::shared_ptr<Models::GetDataSourceDeployResponseBodyResultSwift> swift_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
