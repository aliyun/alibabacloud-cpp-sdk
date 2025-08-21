// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOLLECTORRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATECOLLECTORRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CreateCollectorResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCollectorResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(resId, resId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCollectorResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(resId, resId_);
    };
    CreateCollectorResponseBodyResult() = default ;
    CreateCollectorResponseBodyResult(const CreateCollectorResponseBodyResult &) = default ;
    CreateCollectorResponseBodyResult(CreateCollectorResponseBodyResult &&) = default ;
    CreateCollectorResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCollectorResponseBodyResult() = default ;
    CreateCollectorResponseBodyResult& operator=(const CreateCollectorResponseBodyResult &) = default ;
    CreateCollectorResponseBodyResult& operator=(CreateCollectorResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resId_ != nullptr; };
    // resId Field Functions 
    bool hasResId() const { return this->resId_ != nullptr;};
    void deleteResId() { this->resId_ = nullptr;};
    inline string resId() const { DARABONBA_PTR_GET_DEFAULT(resId_, "") };
    inline CreateCollectorResponseBodyResult& setResId(string resId) { DARABONBA_PTR_SET_VALUE(resId_, resId) };


  protected:
    std::shared_ptr<string> resId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
