// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEFINITION_HPP_
#define ALIBABACLOUD_MODELS_DEFINITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class Definition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Definition& obj) { 
      DARABONBA_PTR_TO_JSON(Cedar, cedar_);
    };
    friend void from_json(const Darabonba::Json& j, Definition& obj) { 
      DARABONBA_PTR_FROM_JSON(Cedar, cedar_);
    };
    Definition() = default ;
    Definition(const Definition &) = default ;
    Definition(Definition &&) = default ;
    Definition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Definition() = default ;
    Definition& operator=(const Definition &) = default ;
    Definition& operator=(Definition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Cedar : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Cedar& obj) { 
        DARABONBA_PTR_TO_JSON(Statement, statement_);
      };
      friend void from_json(const Darabonba::Json& j, Cedar& obj) { 
        DARABONBA_PTR_FROM_JSON(Statement, statement_);
      };
      Cedar() = default ;
      Cedar(const Cedar &) = default ;
      Cedar(Cedar &&) = default ;
      Cedar(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Cedar() = default ;
      Cedar& operator=(const Cedar &) = default ;
      Cedar& operator=(Cedar &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->statement_ == nullptr; };
      // statement Field Functions 
      bool hasStatement() const { return this->statement_ != nullptr;};
      void deleteStatement() { this->statement_ = nullptr;};
      inline string getStatement() const { DARABONBA_PTR_GET_DEFAULT(statement_, "") };
      inline Cedar& setStatement(string statement) { DARABONBA_PTR_SET_VALUE(statement_, statement) };


    protected:
      shared_ptr<string> statement_ {};
    };

    virtual bool empty() const override { return this->cedar_ == nullptr; };
    // cedar Field Functions 
    bool hasCedar() const { return this->cedar_ != nullptr;};
    void deleteCedar() { this->cedar_ = nullptr;};
    inline const Definition::Cedar & getCedar() const { DARABONBA_PTR_GET_CONST(cedar_, Definition::Cedar) };
    inline Definition::Cedar getCedar() { DARABONBA_PTR_GET(cedar_, Definition::Cedar) };
    inline Definition& setCedar(const Definition::Cedar & cedar) { DARABONBA_PTR_SET_VALUE(cedar_, cedar) };
    inline Definition& setCedar(Definition::Cedar && cedar) { DARABONBA_PTR_SET_RVALUE(cedar_, cedar) };


  protected:
    shared_ptr<Definition::Cedar> cedar_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
