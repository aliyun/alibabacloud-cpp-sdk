// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAEXPORTORDERRESPONSEBODYCREATEORDERRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAEXPORTORDERRESPONSEBODYCREATEORDERRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDataExportOrderResponseBodyCreateOrderResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataExportOrderResponseBodyCreateOrderResult& obj) { 
      DARABONBA_PTR_TO_JSON(CreateOrderResult, createOrderResult_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataExportOrderResponseBodyCreateOrderResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateOrderResult, createOrderResult_);
    };
    CreateDataExportOrderResponseBodyCreateOrderResult() = default ;
    CreateDataExportOrderResponseBodyCreateOrderResult(const CreateDataExportOrderResponseBodyCreateOrderResult &) = default ;
    CreateDataExportOrderResponseBodyCreateOrderResult(CreateDataExportOrderResponseBodyCreateOrderResult &&) = default ;
    CreateDataExportOrderResponseBodyCreateOrderResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataExportOrderResponseBodyCreateOrderResult() = default ;
    CreateDataExportOrderResponseBodyCreateOrderResult& operator=(const CreateDataExportOrderResponseBodyCreateOrderResult &) = default ;
    CreateDataExportOrderResponseBodyCreateOrderResult& operator=(CreateDataExportOrderResponseBodyCreateOrderResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createOrderResult_ == nullptr; };
    // createOrderResult Field Functions 
    bool hasCreateOrderResult() const { return this->createOrderResult_ != nullptr;};
    void deleteCreateOrderResult() { this->createOrderResult_ = nullptr;};
    inline const vector<int64_t> & createOrderResult() const { DARABONBA_PTR_GET_CONST(createOrderResult_, vector<int64_t>) };
    inline vector<int64_t> createOrderResult() { DARABONBA_PTR_GET(createOrderResult_, vector<int64_t>) };
    inline CreateDataExportOrderResponseBodyCreateOrderResult& setCreateOrderResult(const vector<int64_t> & createOrderResult) { DARABONBA_PTR_SET_VALUE(createOrderResult_, createOrderResult) };
    inline CreateDataExportOrderResponseBodyCreateOrderResult& setCreateOrderResult(vector<int64_t> && createOrderResult) { DARABONBA_PTR_SET_RVALUE(createOrderResult_, createOrderResult) };


  protected:
    std::shared_ptr<vector<int64_t>> createOrderResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
