// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SERDEINFOMODEL_HPP_
#define ALIBABACLOUD_MODELS_SERDEINFOMODEL_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class SerDeInfoModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SerDeInfoModel& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(SerDeId, serDeId_);
      DARABONBA_PTR_TO_JSON(SerializationLib, serializationLib_);
    };
    friend void from_json(const Darabonba::Json& j, SerDeInfoModel& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(SerDeId, serDeId_);
      DARABONBA_PTR_FROM_JSON(SerializationLib, serializationLib_);
    };
    SerDeInfoModel() = default ;
    SerDeInfoModel(const SerDeInfoModel &) = default ;
    SerDeInfoModel(SerDeInfoModel &&) = default ;
    SerDeInfoModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SerDeInfoModel() = default ;
    SerDeInfoModel& operator=(const SerDeInfoModel &) = default ;
    SerDeInfoModel& operator=(SerDeInfoModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->parameters_ == nullptr && return this->serDeId_ == nullptr && return this->serializationLib_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SerDeInfoModel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const map<string, string> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
    inline map<string, string> parameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
    inline SerDeInfoModel& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline SerDeInfoModel& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // serDeId Field Functions 
    bool hasSerDeId() const { return this->serDeId_ != nullptr;};
    void deleteSerDeId() { this->serDeId_ = nullptr;};
    inline int64_t serDeId() const { DARABONBA_PTR_GET_DEFAULT(serDeId_, 0L) };
    inline SerDeInfoModel& setSerDeId(int64_t serDeId) { DARABONBA_PTR_SET_VALUE(serDeId_, serDeId) };


    // serializationLib Field Functions 
    bool hasSerializationLib() const { return this->serializationLib_ != nullptr;};
    void deleteSerializationLib() { this->serializationLib_ = nullptr;};
    inline string serializationLib() const { DARABONBA_PTR_GET_DEFAULT(serializationLib_, "") };
    inline SerDeInfoModel& setSerializationLib(string serializationLib) { DARABONBA_PTR_SET_VALUE(serializationLib_, serializationLib) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<map<string, string>> parameters_ = nullptr;
    std::shared_ptr<int64_t> serDeId_ = nullptr;
    std::shared_ptr<string> serializationLib_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
