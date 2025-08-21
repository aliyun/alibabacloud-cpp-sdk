// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASTREAMRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASTREAMRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CreateDataStreamResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataStreamResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataStreamResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    CreateDataStreamResponseBodyResult() = default ;
    CreateDataStreamResponseBodyResult(const CreateDataStreamResponseBodyResult &) = default ;
    CreateDataStreamResponseBodyResult(CreateDataStreamResponseBodyResult &&) = default ;
    CreateDataStreamResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataStreamResponseBodyResult() = default ;
    CreateDataStreamResponseBodyResult& operator=(const CreateDataStreamResponseBodyResult &) = default ;
    CreateDataStreamResponseBodyResult& operator=(CreateDataStreamResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDataStreamResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
