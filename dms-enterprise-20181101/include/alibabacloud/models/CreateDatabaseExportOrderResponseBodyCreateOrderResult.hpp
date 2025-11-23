// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATABASEEXPORTORDERRESPONSEBODYCREATEORDERRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATABASEEXPORTORDERRESPONSEBODYCREATEORDERRESULT_HPP_
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
  class CreateDatabaseExportOrderResponseBodyCreateOrderResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatabaseExportOrderResponseBodyCreateOrderResult& obj) { 
      DARABONBA_PTR_TO_JSON(CreateOrderResult, createOrderResult_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatabaseExportOrderResponseBodyCreateOrderResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateOrderResult, createOrderResult_);
    };
    CreateDatabaseExportOrderResponseBodyCreateOrderResult() = default ;
    CreateDatabaseExportOrderResponseBodyCreateOrderResult(const CreateDatabaseExportOrderResponseBodyCreateOrderResult &) = default ;
    CreateDatabaseExportOrderResponseBodyCreateOrderResult(CreateDatabaseExportOrderResponseBodyCreateOrderResult &&) = default ;
    CreateDatabaseExportOrderResponseBodyCreateOrderResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatabaseExportOrderResponseBodyCreateOrderResult() = default ;
    CreateDatabaseExportOrderResponseBodyCreateOrderResult& operator=(const CreateDatabaseExportOrderResponseBodyCreateOrderResult &) = default ;
    CreateDatabaseExportOrderResponseBodyCreateOrderResult& operator=(CreateDatabaseExportOrderResponseBodyCreateOrderResult &&) = default ;
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
    inline CreateDatabaseExportOrderResponseBodyCreateOrderResult& setCreateOrderResult(const vector<int64_t> & createOrderResult) { DARABONBA_PTR_SET_VALUE(createOrderResult_, createOrderResult) };
    inline CreateDatabaseExportOrderResponseBodyCreateOrderResult& setCreateOrderResult(vector<int64_t> && createOrderResult) { DARABONBA_PTR_SET_RVALUE(createOrderResult_, createOrderResult) };


  protected:
    std::shared_ptr<vector<int64_t>> createOrderResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
