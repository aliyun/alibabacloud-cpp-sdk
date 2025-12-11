// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESOURCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATESOURCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateSourceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSourceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSourceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
    };
    CreateSourceResponseBodyData() = default ;
    CreateSourceResponseBodyData(const CreateSourceResponseBodyData &) = default ;
    CreateSourceResponseBodyData(CreateSourceResponseBodyData &&) = default ;
    CreateSourceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSourceResponseBodyData() = default ;
    CreateSourceResponseBodyData& operator=(const CreateSourceResponseBodyData &) = default ;
    CreateSourceResponseBodyData& operator=(CreateSourceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceId_ == nullptr; };
    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline CreateSourceResponseBodyData& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


  protected:
    std::shared_ptr<string> sourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
