// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASOURCERESPONSEBODYCREATERESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASOURCERESPONSEBODYCREATERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateDataSourceResponseBodyCreateResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataSourceResponseBodyCreateResult& obj) { 
      DARABONBA_PTR_TO_JSON(DevDataSourceId, devDataSourceId_);
      DARABONBA_PTR_TO_JSON(ProdDataSourceId, prodDataSourceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataSourceResponseBodyCreateResult& obj) { 
      DARABONBA_PTR_FROM_JSON(DevDataSourceId, devDataSourceId_);
      DARABONBA_PTR_FROM_JSON(ProdDataSourceId, prodDataSourceId_);
    };
    CreateDataSourceResponseBodyCreateResult() = default ;
    CreateDataSourceResponseBodyCreateResult(const CreateDataSourceResponseBodyCreateResult &) = default ;
    CreateDataSourceResponseBodyCreateResult(CreateDataSourceResponseBodyCreateResult &&) = default ;
    CreateDataSourceResponseBodyCreateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataSourceResponseBodyCreateResult() = default ;
    CreateDataSourceResponseBodyCreateResult& operator=(const CreateDataSourceResponseBodyCreateResult &) = default ;
    CreateDataSourceResponseBodyCreateResult& operator=(CreateDataSourceResponseBodyCreateResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->devDataSourceId_ != nullptr
        && this->prodDataSourceId_ != nullptr; };
    // devDataSourceId Field Functions 
    bool hasDevDataSourceId() const { return this->devDataSourceId_ != nullptr;};
    void deleteDevDataSourceId() { this->devDataSourceId_ = nullptr;};
    inline int64_t devDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(devDataSourceId_, 0L) };
    inline CreateDataSourceResponseBodyCreateResult& setDevDataSourceId(int64_t devDataSourceId) { DARABONBA_PTR_SET_VALUE(devDataSourceId_, devDataSourceId) };


    // prodDataSourceId Field Functions 
    bool hasProdDataSourceId() const { return this->prodDataSourceId_ != nullptr;};
    void deleteProdDataSourceId() { this->prodDataSourceId_ = nullptr;};
    inline int64_t prodDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(prodDataSourceId_, 0L) };
    inline CreateDataSourceResponseBodyCreateResult& setProdDataSourceId(int64_t prodDataSourceId) { DARABONBA_PTR_SET_VALUE(prodDataSourceId_, prodDataSourceId) };


  protected:
    std::shared_ptr<int64_t> devDataSourceId_ = nullptr;
    std::shared_ptr<int64_t> prodDataSourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
