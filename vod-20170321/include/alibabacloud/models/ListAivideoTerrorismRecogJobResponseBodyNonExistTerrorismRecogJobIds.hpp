// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIVIDEOTERRORISMRECOGJOBRESPONSEBODYNONEXISTTERRORISMRECOGJOBIDS_HPP_
#define ALIBABACLOUD_MODELS_LISTAIVIDEOTERRORISMRECOGJOBRESPONSEBODYNONEXISTTERRORISMRECOGJOBIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIVideoTerrorismRecogJobResponseBodyNonExistTerrorismRecogJobIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIVideoTerrorismRecogJobResponseBodyNonExistTerrorismRecogJobIds& obj) { 
      DARABONBA_PTR_TO_JSON(String, string_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIVideoTerrorismRecogJobResponseBodyNonExistTerrorismRecogJobIds& obj) { 
      DARABONBA_PTR_FROM_JSON(String, string_);
    };
    ListAIVideoTerrorismRecogJobResponseBodyNonExistTerrorismRecogJobIds() = default ;
    ListAIVideoTerrorismRecogJobResponseBodyNonExistTerrorismRecogJobIds(const ListAIVideoTerrorismRecogJobResponseBodyNonExistTerrorismRecogJobIds &) = default ;
    ListAIVideoTerrorismRecogJobResponseBodyNonExistTerrorismRecogJobIds(ListAIVideoTerrorismRecogJobResponseBodyNonExistTerrorismRecogJobIds &&) = default ;
    ListAIVideoTerrorismRecogJobResponseBodyNonExistTerrorismRecogJobIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIVideoTerrorismRecogJobResponseBodyNonExistTerrorismRecogJobIds() = default ;
    ListAIVideoTerrorismRecogJobResponseBodyNonExistTerrorismRecogJobIds& operator=(const ListAIVideoTerrorismRecogJobResponseBodyNonExistTerrorismRecogJobIds &) = default ;
    ListAIVideoTerrorismRecogJobResponseBodyNonExistTerrorismRecogJobIds& operator=(ListAIVideoTerrorismRecogJobResponseBodyNonExistTerrorismRecogJobIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->string_ != nullptr; };
    // string Field Functions 
    bool hasString() const { return this->string_ != nullptr;};
    void deleteString() { this->string_ = nullptr;};
    inline const vector<string> & string() const { DARABONBA_PTR_GET_CONST(string_, vector<string>) };
    inline vector<string> string() { DARABONBA_PTR_GET(string_, vector<string>) };
    inline ListAIVideoTerrorismRecogJobResponseBodyNonExistTerrorismRecogJobIds& setString(const vector<string> & string) { DARABONBA_PTR_SET_VALUE(string_, string) };
    inline ListAIVideoTerrorismRecogJobResponseBodyNonExistTerrorismRecogJobIds& setString(vector<string> && string) { DARABONBA_PTR_SET_RVALUE(string_, string) };


  protected:
    std::shared_ptr<vector<string>> string_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
