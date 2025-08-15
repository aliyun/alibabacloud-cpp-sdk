// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVYCOMPUTERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVYCOMPUTERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CreateLivyComputeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLivyComputeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(livyComputeId, livyComputeId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLivyComputeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(livyComputeId, livyComputeId_);
    };
    CreateLivyComputeResponseBodyData() = default ;
    CreateLivyComputeResponseBodyData(const CreateLivyComputeResponseBodyData &) = default ;
    CreateLivyComputeResponseBodyData(CreateLivyComputeResponseBodyData &&) = default ;
    CreateLivyComputeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLivyComputeResponseBodyData() = default ;
    CreateLivyComputeResponseBodyData& operator=(const CreateLivyComputeResponseBodyData &) = default ;
    CreateLivyComputeResponseBodyData& operator=(CreateLivyComputeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->livyComputeId_ != nullptr; };
    // livyComputeId Field Functions 
    bool hasLivyComputeId() const { return this->livyComputeId_ != nullptr;};
    void deleteLivyComputeId() { this->livyComputeId_ = nullptr;};
    inline string livyComputeId() const { DARABONBA_PTR_GET_DEFAULT(livyComputeId_, "") };
    inline CreateLivyComputeResponseBodyData& setLivyComputeId(string livyComputeId) { DARABONBA_PTR_SET_VALUE(livyComputeId_, livyComputeId) };


  protected:
    std::shared_ptr<string> livyComputeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
