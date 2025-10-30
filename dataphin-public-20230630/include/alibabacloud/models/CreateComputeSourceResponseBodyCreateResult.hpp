// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPUTESOURCERESPONSEBODYCREATERESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPUTESOURCERESPONSEBODYCREATERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateComputeSourceResponseBodyCreateResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateComputeSourceResponseBodyCreateResult& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, CreateComputeSourceResponseBodyCreateResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    CreateComputeSourceResponseBodyCreateResult() = default ;
    CreateComputeSourceResponseBodyCreateResult(const CreateComputeSourceResponseBodyCreateResult &) = default ;
    CreateComputeSourceResponseBodyCreateResult(CreateComputeSourceResponseBodyCreateResult &&) = default ;
    CreateComputeSourceResponseBodyCreateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateComputeSourceResponseBodyCreateResult() = default ;
    CreateComputeSourceResponseBodyCreateResult& operator=(const CreateComputeSourceResponseBodyCreateResult &) = default ;
    CreateComputeSourceResponseBodyCreateResult& operator=(CreateComputeSourceResponseBodyCreateResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateComputeSourceResponseBodyCreateResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
