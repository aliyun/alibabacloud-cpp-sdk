// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetDoctorApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    GetDoctorApplicationResponseBody() = default ;
    GetDoctorApplicationResponseBody(const GetDoctorApplicationResponseBody &) = default ;
    GetDoctorApplicationResponseBody(GetDoctorApplicationResponseBody &&) = default ;
    GetDoctorApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorApplicationResponseBody() = default ;
    GetDoctorApplicationResponseBody& operator=(const GetDoctorApplicationResponseBody &) = default ;
    GetDoctorApplicationResponseBody& operator=(GetDoctorApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(suggestions, suggestions_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(suggestions, suggestions_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->suggestions_ == nullptr; };
      // suggestions Field Functions 
      bool hasSuggestions() const { return this->suggestions_ != nullptr;};
      void deleteSuggestions() { this->suggestions_ = nullptr;};
      inline const vector<string> & getSuggestions() const { DARABONBA_PTR_GET_CONST(suggestions_, vector<string>) };
      inline vector<string> getSuggestions() { DARABONBA_PTR_GET(suggestions_, vector<string>) };
      inline Data& setSuggestions(const vector<string> & suggestions) { DARABONBA_PTR_SET_VALUE(suggestions_, suggestions) };
      inline Data& setSuggestions(vector<string> && suggestions) { DARABONBA_PTR_SET_RVALUE(suggestions_, suggestions) };


    protected:
      // The diagnostics list.
      shared_ptr<vector<string>> suggestions_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDoctorApplicationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDoctorApplicationResponseBody::Data) };
    inline GetDoctorApplicationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDoctorApplicationResponseBody::Data) };
    inline GetDoctorApplicationResponseBody& setData(const GetDoctorApplicationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDoctorApplicationResponseBody& setData(GetDoctorApplicationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // The data returned.
    shared_ptr<GetDoctorApplicationResponseBody::Data> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
