// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LINEAGETASK_HPP_
#define ALIBABACLOUD_MODELS_LINEAGETASK_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class LineageTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LineageTask& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, LineageTask& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    LineageTask() = default ;
    LineageTask(const LineageTask &) = default ;
    LineageTask(LineageTask &&) = default ;
    LineageTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LineageTask() = default ;
    LineageTask& operator=(const LineageTask &) = default ;
    LineageTask& operator=(LineageTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributes_ != nullptr
        && this->id_ != nullptr && this->type_ != nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const map<string, string> & attributes() const { DARABONBA_PTR_GET_CONST(attributes_, map<string, string>) };
    inline map<string, string> attributes() { DARABONBA_PTR_GET(attributes_, map<string, string>) };
    inline LineageTask& setAttributes(const map<string, string> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline LineageTask& setAttributes(map<string, string> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline LineageTask& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline LineageTask& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<map<string, string>> attributes_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
