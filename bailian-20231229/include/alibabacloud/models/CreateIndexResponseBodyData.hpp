// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINDEXRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEINDEXRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class CreateIndexResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIndexResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIndexResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    CreateIndexResponseBodyData() = default ;
    CreateIndexResponseBodyData(const CreateIndexResponseBodyData &) = default ;
    CreateIndexResponseBodyData(CreateIndexResponseBodyData &&) = default ;
    CreateIndexResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIndexResponseBodyData() = default ;
    CreateIndexResponseBodyData& operator=(const CreateIndexResponseBodyData &) = default ;
    CreateIndexResponseBodyData& operator=(CreateIndexResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateIndexResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The primary key ID of the knowledge base, `IndexId`.
    // 
    // >  We recommend that you store this ID. It is required for all subsequent API operations related to this knowledge base.
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
