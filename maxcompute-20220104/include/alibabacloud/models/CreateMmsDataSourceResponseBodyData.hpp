// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMMSDATASOURCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEMMSDATASOURCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class CreateMmsDataSourceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMmsDataSourceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(dataSourceId, dataSourceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMmsDataSourceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(dataSourceId, dataSourceId_);
    };
    CreateMmsDataSourceResponseBodyData() = default ;
    CreateMmsDataSourceResponseBodyData(const CreateMmsDataSourceResponseBodyData &) = default ;
    CreateMmsDataSourceResponseBodyData(CreateMmsDataSourceResponseBodyData &&) = default ;
    CreateMmsDataSourceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMmsDataSourceResponseBodyData() = default ;
    CreateMmsDataSourceResponseBodyData& operator=(const CreateMmsDataSourceResponseBodyData &) = default ;
    CreateMmsDataSourceResponseBodyData& operator=(CreateMmsDataSourceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSourceId_ != nullptr; };
    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int64_t dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
    inline CreateMmsDataSourceResponseBodyData& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


  protected:
    std::shared_ptr<int64_t> dataSourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
