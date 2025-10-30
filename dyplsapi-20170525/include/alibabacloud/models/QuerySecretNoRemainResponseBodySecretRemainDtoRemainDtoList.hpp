// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSECRETNOREMAINRESPONSEBODYSECRETREMAINDTOREMAINDTOLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSECRETNOREMAINRESPONSEBODYSECRETREMAINDTOREMAINDTOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList& obj) { 
      DARABONBA_PTR_TO_JSON(remainDTO, remainDTO_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList& obj) { 
      DARABONBA_PTR_FROM_JSON(remainDTO, remainDTO_);
    };
    QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList() = default ;
    QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList(const QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList &) = default ;
    QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList(QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList &&) = default ;
    QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList() = default ;
    QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList& operator=(const QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList &) = default ;
    QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList& operator=(QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remainDTO_ == nullptr; };
    // remainDTO Field Functions 
    bool hasRemainDTO() const { return this->remainDTO_ != nullptr;};
    void deleteRemainDTO() { this->remainDTO_ = nullptr;};
    inline const vector<Models::QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO> & remainDTO() const { DARABONBA_PTR_GET_CONST(remainDTO_, vector<Models::QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO>) };
    inline vector<Models::QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO> remainDTO() { DARABONBA_PTR_GET(remainDTO_, vector<Models::QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO>) };
    inline QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList& setRemainDTO(const vector<Models::QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO> & remainDTO) { DARABONBA_PTR_SET_VALUE(remainDTO_, remainDTO) };
    inline QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList& setRemainDTO(vector<Models::QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO> && remainDTO) { DARABONBA_PTR_SET_RVALUE(remainDTO_, remainDTO) };


  protected:
    std::shared_ptr<vector<Models::QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO>> remainDTO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
