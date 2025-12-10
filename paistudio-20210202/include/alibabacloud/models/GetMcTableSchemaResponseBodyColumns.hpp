// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCTABLESCHEMARESPONSEBODYCOLUMNS_HPP_
#define ALIBABACLOUD_MODELS_GETMCTABLESCHEMARESPONSEBODYCOLUMNS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetMCTableSchemaResponseBodyColumns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMCTableSchemaResponseBodyColumns& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Preview, preview_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetMCTableSchemaResponseBodyColumns& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Preview, preview_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetMCTableSchemaResponseBodyColumns() = default ;
    GetMCTableSchemaResponseBodyColumns(const GetMCTableSchemaResponseBodyColumns &) = default ;
    GetMCTableSchemaResponseBodyColumns(GetMCTableSchemaResponseBodyColumns &&) = default ;
    GetMCTableSchemaResponseBodyColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMCTableSchemaResponseBodyColumns() = default ;
    GetMCTableSchemaResponseBodyColumns& operator=(const GetMCTableSchemaResponseBodyColumns &) = default ;
    GetMCTableSchemaResponseBodyColumns& operator=(GetMCTableSchemaResponseBodyColumns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->preview_ == nullptr && return this->type_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetMCTableSchemaResponseBodyColumns& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // preview Field Functions 
    bool hasPreview() const { return this->preview_ != nullptr;};
    void deletePreview() { this->preview_ = nullptr;};
    inline const vector<string> & preview() const { DARABONBA_PTR_GET_CONST(preview_, vector<string>) };
    inline vector<string> preview() { DARABONBA_PTR_GET(preview_, vector<string>) };
    inline GetMCTableSchemaResponseBodyColumns& setPreview(const vector<string> & preview) { DARABONBA_PTR_SET_VALUE(preview_, preview) };
    inline GetMCTableSchemaResponseBodyColumns& setPreview(vector<string> && preview) { DARABONBA_PTR_SET_RVALUE(preview_, preview) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetMCTableSchemaResponseBodyColumns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<string>> preview_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
