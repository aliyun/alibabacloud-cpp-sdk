// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTDEFINITIONASYNCHRONOUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_IMPORTDEFINITIONASYNCHRONOUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ImportDefinitionAsynchronousResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportDefinitionAsynchronousResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ImportDefinitionAsynchronousResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ImportDefinitionAsynchronousResponseBodyData() = default ;
    ImportDefinitionAsynchronousResponseBodyData(const ImportDefinitionAsynchronousResponseBodyData &) = default ;
    ImportDefinitionAsynchronousResponseBodyData(ImportDefinitionAsynchronousResponseBodyData &&) = default ;
    ImportDefinitionAsynchronousResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportDefinitionAsynchronousResponseBodyData() = default ;
    ImportDefinitionAsynchronousResponseBodyData& operator=(const ImportDefinitionAsynchronousResponseBodyData &) = default ;
    ImportDefinitionAsynchronousResponseBodyData& operator=(ImportDefinitionAsynchronousResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->result_ == nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool result() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline ImportDefinitionAsynchronousResponseBodyData& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    std::shared_ptr<bool> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
