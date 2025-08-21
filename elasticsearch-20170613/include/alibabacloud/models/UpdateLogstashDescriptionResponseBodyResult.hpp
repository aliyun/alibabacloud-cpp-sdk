// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOGSTASHDESCRIPTIONRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOGSTASHDESCRIPTIONRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateLogstashDescriptionResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLogstashDescriptionResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLogstashDescriptionResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
    };
    UpdateLogstashDescriptionResponseBodyResult() = default ;
    UpdateLogstashDescriptionResponseBodyResult(const UpdateLogstashDescriptionResponseBodyResult &) = default ;
    UpdateLogstashDescriptionResponseBodyResult(UpdateLogstashDescriptionResponseBodyResult &&) = default ;
    UpdateLogstashDescriptionResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLogstashDescriptionResponseBodyResult() = default ;
    UpdateLogstashDescriptionResponseBodyResult& operator=(const UpdateLogstashDescriptionResponseBodyResult &) = default ;
    UpdateLogstashDescriptionResponseBodyResult& operator=(UpdateLogstashDescriptionResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateLogstashDescriptionResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // The name of the cluster.
    std::shared_ptr<string> description_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
